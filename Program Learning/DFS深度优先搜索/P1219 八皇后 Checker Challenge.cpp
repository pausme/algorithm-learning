//
// Created by zx208 on 2023/4/21.
//

#include <bits/stdc++.h>
using namespace std;

const int N = 15;
int n, result = 0;
int col[N], rc[N], dg[2*N], idg[2*N];

void dfs(int k){
    if(k == n+1){
        ++result;
        if(result <= 3){
            for (int i = 1; i <= n; ++i) {
                cout << rc[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    for (int i = 1; i <= n; ++i) {
        /* 对角线公式需要自己计算
         * ax + by + c = 1
         * 主对角线：
         * a + b + c = 1
         * na + b + c = n
         * na + na + c = 2n-1
         * 求出 a = 1, b = 1, c = -1
         * 次对角线：定义右上角为第一条
         * a + nb + c = 1
         * a + b + c = n
         * na + b + c = 2n-1
         * 求出 a = 1, b = -1, c = n
         * */
        if(!col[i] && !dg[i+k-1] && !idg[i-k+n]){
            // 列没有被使用 && 主对角线没有被使用 && 此对角线没有被使用
            rc[k] = i;
            col[i] = 1;
            dg[i+k-1] = 1;
            idg[i-k+n] = 1;
            // 递归
            dfs(k+1);
            // 回溯
            col[i] = 0;
            dg[i+k-1] = 0;
            idg[i-k+n] = 0;
        }
    }
}

int main(){
    cin >> n;
    dfs(1);
    cout << result;
    return 0;
}