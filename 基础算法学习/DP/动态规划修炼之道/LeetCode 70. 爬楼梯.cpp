//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/climbing-stairs/
#include <bits/stdc++.h>
using namespace std;
const int N = 50;
int dp[N];

int main(){
    int n;
    cin >> n;
    memset(dp, 0, sizeof dp);
    dp[1] = 1, dp[2] = 2;
    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n];
    return 0;
}