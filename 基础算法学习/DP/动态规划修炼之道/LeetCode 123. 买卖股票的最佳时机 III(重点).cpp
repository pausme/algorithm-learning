//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-iii/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int nums[N], dp[N][4];

int main(){
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> nums[i];
    }
    memset(dp, 0, sizeof dp);

    return 0;
}