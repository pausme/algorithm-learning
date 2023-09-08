//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/min-cost-climbing-stairs/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int dp[N];

int main(){
    int num;
    cin >> num;
    memset(dp, 0, sizeof dp);
    for (int i = 0; i < num; ++i) {
        cin >> dp[i];
    }
    int dp1 = 0, dp2 = 0;
    for(int i = 2; i <= num; i++){
        int dp3 = min(dp2 + dp[i-1], dp1 + dp[i-2]);
        dp1 = dp2;
        dp2 = dp3;
    }
    cout << dp2;
    return 0;
}