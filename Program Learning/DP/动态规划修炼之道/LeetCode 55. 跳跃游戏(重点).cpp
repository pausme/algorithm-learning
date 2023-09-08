//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/jump-game/
#include <bits/stdc++.h>
using namespace std;
const int N = 4 * 1e4;
int dp[N], nums[N]; // dp -> 从下标i，能跳到的最远距离为dp[i]

int main(){
    int num;
    cin >> num;
    memset(dp, 0, sizeof dp);
    for (int i = 0; i < num; ++i) {
        cin >> nums[i];
    }
    dp[0] = nums[0];

    if(num == 1){
        cout << "true";
        return 0;
    }
    if(nums[0] == 0) {
        cout << "false";
        return 0;
    }
    // 状态转移方程为 dp[i] = max(i + nums[i], dp[i-1])  即 当前位置加上该位置能跳跃的最大长度和上一次跳跃的最远距离取最大值
    for (int i = 1; i < num; ++i) {
        if(i <= dp[i-1]){
            dp[i] = max(dp[i-1], i + nums[i]);
            if(dp[i] >= num-1) {
                cout << "true";
                return 0;
            }
        }
    }

    cout << "false";
    return 0;
}