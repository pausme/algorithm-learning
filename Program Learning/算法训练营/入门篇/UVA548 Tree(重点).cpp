//
// Created by zx208 on 2023/7/22.
//
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=7&page=show_problem&problem=489
//https://www.luogu.com.cn/problem/UVA548
#include <bits/stdc++.h>
using namespace std;

const int maxv = 1e5 + 10;
int inorder[maxv], postorder[maxv], lch[maxv], rch[maxv], n;
int min_sum, minv;

bool read_list(int *a){
    string line;
    if(!getline(cin, line)) return false;
    stringstream ss(line);
    n = 0;
    int x;
    while(ss >> x) a[n++] = x;
    return n > 0;
}

int createtree(int L1, int R1, int L2, int R2){
    if(L1 > R1) return 0;
    int root = postorder[R2];
    int p = L1;
    while(inorder[p] != root) p++;
    int cnt = p-L1;
    lch[root] = createtree(L1, p-1, L2, L2+cnt-1);
    rch[root] = createtree(p+1, R1, L2+cnt, R2-1);
    return root;
}

void findmin(int u, int sum){
    sum += u;
    if(!lch[u] && !rch[u]){
        if(sum < min_sum || (sum == min_sum && u < minv)){
            minv = u;
            min_sum = sum;
        }
    }
    if(lch[u]) findmin(lch[u], sum);
    if(rch[u]) findmin(rch[u], sum);
}

int main(){
    // 怎么保证数据的输入?
    while(read_list(inorder)){
        read_list(postorder);
        createtree(0, n-1, 0, n-1);
        min_sum = 0x3f3f3f3f;
        findmin(postorder[n-1], 0);
        cout << minv << endl;
    }
    return 0;
}