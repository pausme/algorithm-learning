//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/unique-paths-ii/
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int dp[N][N], go[N][N];

int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> go[i][j];
        }
    }
    memset(dp, 0, sizeof dp);
    for (int i = 0; i < n && go[i][0] == 0; ++i) {
        dp[i][0] = 1;
    }

    for (int i = 0; i < m && go[0][i] == 0; ++i) {
        dp[0][i] = 1;
    }

    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if(!go[i][j]){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            } else dp[i][j] = 0;
        }
    }
    cout << dp[m-1][n-1];
    return 0;
}