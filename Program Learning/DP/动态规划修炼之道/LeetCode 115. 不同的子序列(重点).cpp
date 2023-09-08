//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/distinct-subsequences/
// 现在数据量已经超过了 long long int 的最大表示范围，所以要使用高精度来求解
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int dp[N][N];

int main(){
    string text1, text2;
    cin >> text1 >> text2;
    int m = text1.length(), n = text2.length();
    if(m < n){
        cout << 0;
        return 0;
    }
    memset(dp, 0 ,sizeof dp);
    if(text1[0] == text2[0]) dp[0][0] = 1;
    for (int i = 1; i < m; ++i) {
        if(text1[i] == text2[0]) dp[i][0] = dp[i-1][0] + 1;
        else dp[i][0] = dp[i-1][0];
    }

    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if(text1[i] == text2[j]) dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[m-1][n-1];
    return 0;
}