//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/maximum-length-of-repeated-subarray/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int nums1[N], nums2[N], dp[N][N]; // dp -> 到第i个

int main(){
    int n1, n2, res = 0;
    cin >> n1 >> n2;
    for (int i = 0; i < n1; ++i) {
        cin >> nums1[i];
    }
    for (int i = 0; i < n2; ++i) {
        cin >> nums2[i];
    }
    memset(dp, 0, sizeof dp);
//    if(n1 == n2 == 1) nums1[0] == nums2[0] ? dp[0][0] = 1 : dp[0][0] = 0;
    for (int i = 0; i < n1; ++i) {
        if(nums1[i] == nums2[0]){
            dp[i][0] = 1;
            res = max(res, dp[i][0]);
        }
    }
    for (int i = 0; i < n2; ++i) {
        if(nums2[i] == nums1[0]){
            dp[0][i] = 1;
            res = max(res, dp[0][i]);
        }
    }

    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            if(nums1[i] == nums2[j]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                res = max(res, dp[i][j]);
            }
        }
    }
    cout << res;
    return 0;
}