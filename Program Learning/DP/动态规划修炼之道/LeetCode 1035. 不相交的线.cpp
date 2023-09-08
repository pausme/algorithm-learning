//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/uncrossed-lines/
#include <bits/stdc++.h>
using namespace std;
const int N = 520;
int dp[N][N], nums1[N], nums2[N];

int main(){
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        cin >> nums1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> nums2[i];
    }
    memset(dp, 0, sizeof dp);
    if(nums1[0] == nums2[0]) dp[0][0] = 1;
    for (int i = 1; i < m; ++i) {
        if(nums1[i] == nums2[0]) dp[i][0] = 1;
        else dp[i][0] = dp[i-1][0];
    }
    for (int i = 1; i < n; ++i) {
        if(nums1[0] == nums2[i]) dp[0][i] = 1;
        else dp[0][i] = dp[0][i-1];
    }

    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if(nums1[i] == nums2[j]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[m-1][n-1];
    return 0;
}