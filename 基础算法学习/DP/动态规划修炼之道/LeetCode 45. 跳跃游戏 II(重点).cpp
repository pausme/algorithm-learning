//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/jump-game-ii/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int dp[N], nums[N]; // dp -> i距离最小需要多少步

int main(){
    int num, times = 1;
    cin >> num;
    memset(dp, 0, sizeof dp);
    for (int i = 0; i < num; ++i) {
        cin >> nums[i];
    }
    if(num <= nums[0]){
        cout << "true";
        return 0;
    }
    if(nums[0] == 0){
        cout << "false";
        return 0;
    }

    for (int i = 1; i <= nums[0]; ++i) {
        dp[i] = 1;
    }

    for (int i = nums[0]; i < num; ++i) {
        dp[i] = min(dp[i] + 1, times);
    }
    return 0;
}