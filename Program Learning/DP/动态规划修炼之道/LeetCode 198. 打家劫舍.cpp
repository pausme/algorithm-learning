//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/house-robber/

#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int dp[N];

int main(){
    int num;
    cin >> num;
    memset(dp, 0, sizeof dp);
    for (int i = 0; i < num; ++i) {
        cin >> dp[i];
    }
    if(num == 1){
        cout << dp[0];
        return 0;
    }
    dp[0] = dp[0], dp[1] = max(dp[0], dp[1]);
    for (int i = 2; i < num; ++i) {
        dp[i] = max(dp[i-1], dp[i-2] + dp[i]);
    }
    cout << dp[num-1];
    return 0;
}
