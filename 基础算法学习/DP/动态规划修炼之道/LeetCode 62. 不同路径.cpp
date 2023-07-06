//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/unique-paths/
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int dp[N][N];

int main(){
    int n, m;
    cin >> m >> n;
    memset(dp, 0, sizeof dp);
    for (int i = 0; i < n; ++i) {
        dp[0][i] = 1;
    }
    for (int i = 0; i < m; ++i) {
        dp[i][0] = 1;
    }
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    cout << dp[m-1][n-1];
    return 0;
}