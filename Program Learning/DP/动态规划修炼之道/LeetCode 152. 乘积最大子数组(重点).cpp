//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/maximum-product-subarray/
#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e4 + 10;
int dp[N][N], nums[N]; // 在这里我们需要储存两个值——乘积最大值和乘积最小值 (因为原数据中有负数的存在) 0代表最大 1代表最小

int main(){
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> nums[i];
    }
    int res = nums[0]; // 这里一定要初始化 res 为 nums 的第一个元素 否则当最大值仅为第一个元素时，无法得到正确答案
    dp[0][0] = dp[0][1] = nums[0];
    for (int i = 1; i < num; ++i) {
        if(nums[i] >= 0){
            dp[i][0] = max(dp[i-1][0] * nums[i], nums[i]);
            dp[i][1] = min(dp[i-1][1] * nums[i], nums[i]);
        } else{
            dp[i][0] = max(dp[i-1][1] * nums[i], nums[i]);
            dp[i][1] = min(dp[i-1][0] * nums[i], nums[i]);
        }
        res = max(res, dp[i][0]);
    }
    cout << res;
    return 0;
}