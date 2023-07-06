//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/minimum-path-sum/
#include <bits/stdc++.h>
using namespace std;
const int N = 210;
int dp[N][N], go[N][N];

int main(){
    int n, m;
    cin >> m >> n;
    memset(dp, 0, sizeof dp);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> go[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            dp[i][j] = min(dp[i-1][j] + go[i-1][j], dp[i][j-1] + go[i][j-1]);
        }
    }
    cout << dp[m-1][n-1];
    return 0;
}