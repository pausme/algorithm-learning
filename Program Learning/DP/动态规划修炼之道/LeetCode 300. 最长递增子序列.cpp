//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/longest-increasing-subsequence/
#include <bits/stdc++.h>
using namespace std;
const int N = 3000;
int nums[N], dp[N]; // dp -> 在第i个数时最长i递增子序列的长度

int main(){
    int num, res = 1;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> nums[i];
    }
    for (int i = 0; i < num; ++i) {
        dp[i] = 1;
    }
    // 只要 nums[i] 大于 nums[0]~nums[i-1]中随便一个数就可以组成一个递增子序列
    for (int i = 1; i < num; ++i) {
        for (int j = i-1; j >= 0; --j) { // 顺逆都可以
            if(nums[i] > nums[j]) dp[i] = max(dp[i], dp[j]+1);
        }
        res = max(res, dp[i]);
    }

    cout << res;
    return 0;
}