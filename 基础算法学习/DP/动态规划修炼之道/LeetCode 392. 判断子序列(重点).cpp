//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/is-subsequence/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int dp[N][N];

int main(){
    string text1, text2;
    cin >> text1 >> text2;
    memset(dp, 0 ,sizeof dp);
    if(text1[0] == text2[0]) dp[0][0] = 1;
    for (int i = 1; i < text1.length(); ++i) {
        if(text1[i] == text2[0]) dp[i][0] = 1;
        else dp[i][0] = dp[i-1][0];
    }
    for (int i = 1; i < text2.length(); ++i) {
        if(text1[0] == text2[i]) dp[0][i] = 1;
        else dp[0][i] = dp[0][i-1];
    }

    for (int i = 1; i < text1.length(); ++i) {
        for (int j = 1; j < text2.length(); ++j) {
            if(text1[i] == text2[j]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    if(dp[text1.length()-1][text2.length()-1] == text1.length()) cout << "true";
    else cout << "false";
    return 0;
}