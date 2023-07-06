//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/triangle/
#include <bits/stdc++.h>
using namespace std;
const int N = 210;
int dp[N][N], vec[N][N];

int main(){
    int num;
    cin >> num;
    memset(dp, 0, sizeof dp);
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> vec[i][j];
        }
    }

    for (int i = 0; i < num; ++i) {
        dp[num-1][i] = vec[num-1][i];
    }

    for (int i = num - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            dp[i][j] += min(vec[i][j] + dp[i+1][j], vec[i][j] + dp[i+1][j+1]);
        }
    }

    cout << dp[0][0];
    return 0;
}