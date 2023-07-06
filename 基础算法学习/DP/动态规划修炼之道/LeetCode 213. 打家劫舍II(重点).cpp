//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/house-robber-ii/
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

    return 0;
}