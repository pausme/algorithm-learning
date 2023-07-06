//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/longest-continuous-increasing-subsequence/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int nums[N], dp[N]; // dp -> 第i个数的最大连续递增子序列长度

int main(){
    int num, res = 1;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> nums[i];
    }

    for (int i = 0; i < num; ++i) {
        dp[i] = 1;
    }

    for (int i = 1; i < num; ++i) {
        if (nums[i] > nums[i - 1]) {
            dp[i] = dp[i - 1] + 1;
        }
        res = max(res, dp[i]);
    }
    cout << res;
    return 0;
}