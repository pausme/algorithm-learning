//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int nums[N], dp[N][2]; // dp -> 第i天时能够获得的最大利润(j代表现在是否已经买入股票：1代表已经买入，0代表还未买入)

int main(){
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> nums[i];
    }
    memset(dp, 0, sizeof dp);
    dp[0][0] = 0, dp[0][1] = -nums[0];

    for (int i = 1; i < num; ++i) {
        // 需要分两种情况来进行讨论——在遍历到第i个股票时，之前是否已经购买过股票
        // 1. 已经购买过股票，则有两种情况——要么卖，要么不卖
        // 2. 还未购买过股票，则也有两种情况——要么买，要么不买
        dp[i][0] = max(dp[i-1][0], dp[i-1][1] + nums[i]);
        dp[i][1] = max(dp[i-1][1], -nums[i]);
    }

    cout << dp[num-1][0];
    return 0;
}