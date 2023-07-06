//
// Created by zx208 on 2023/5/31.
//
//https://leetcode.cn/problems/fibonacci-number/
#include <bits/stdc++.h>
using namespace std;
/*
 * 五步蛇
 * 1. 确定 dp 状态
 * 2. 确定状态转移方程
 * 3. 确定初始化状态
 * 4. 确定状态转移顺序
 * 5. 确定最终解
 * */
const int N = 100;
int dp[N];
int main(){
    // 确定 dp 状态——dp[i]的值就是第i个斐波那契数
    // 确定状态转移方程——dp[i] = dp[i-1] + dp[i-2]
    // 确定初始化状态——dp[1] = 1, dp[2] = 1
    // 确定状态转移顺序——从小到大顺序遍历
    // 确定最终解——即dp[i]的值
    memset(dp, 0, sizeof dp);
    int num;
    cin >> num;
    dp[0] = 1, dp[1] = 1;
    for (int i = 2; i <= num ; ++i) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[num];
    return 0;
}
