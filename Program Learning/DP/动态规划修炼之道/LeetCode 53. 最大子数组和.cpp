//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/maximum-subarray/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int nums[N], dp[N];

int main(){
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> nums[i];
    }
    int res = nums[0];
    dp[0] = nums[0];
    for (int i = 0; i < num; ++i) {
        dp[i] = max(dp[i-1] + nums[i], nums[i]);
        res = max(res, dp[i]);
    }
    cout << res;
    return 0;
}