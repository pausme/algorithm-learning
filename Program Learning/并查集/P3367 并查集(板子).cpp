//
// Created by zx208 on 2023/4/21.
//
#include <bits/stdc++.h>
using namespace std;

const int n = 1e4 + 10;
int N, M, x, y, z;
int fa[n];

int find(int x){
    if(fa[x] == x) return x;
    return fa[x] = find(fa[x]);
}

void unionset(int x, int y){
    // 可以用秩进行合并 但路径压缩查找已经够用了
    fa[find(x)] = find(y);
}

int main(){
    cin >> N >> M;
    for (int i = 1; i <= N; ++i) { // 将每个节点的父节点初始化为它自己
        fa[i] = i;
    }
    while(M--){
        cin >> z >> x >> y;
        if(z == 1) unionset(x, y);
        else {
            x = find(x);
            y = find(y);
            if(x == y) cout << "Y";
            else cout << "N";
        }
    }
    return 0;
}