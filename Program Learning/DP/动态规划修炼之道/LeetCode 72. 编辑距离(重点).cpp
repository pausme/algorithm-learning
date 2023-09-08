//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/edit-distance/
#include <bits/stdc++.h>
using namespace std;
const int N = 520;
int dp[N][N];

int main(){
    string word1, word2;
    cin >> word1 >> word2;
    int n = word1.length(), m = word2.length();
    if(n == 0) {
        cout << m;
        return 0;
    }
    if(m == 0){
        cout << n;
        return 0;
    }
    memset(dp, 0,sizeof dp);
    if(word1[0] == word2[0]) dp[0][0] = 0;
    else dp[0][0] = 1;
    for (int i = 1; i < n; ++i) {
        if(word1[i] == word2[0]) dp[i][0] = i;
        else dp[i][0] = dp[i-1][0] + 1;
    }
    for (int i = 1; i < m; ++i) {
        if(word1[0] == word2[i]) dp[0][i] = i;
        else dp[0][i] = dp[0][i-1] + 1;
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            if(word1[i] == word2[j]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = min({dp[i-1][j] + 1, dp[i][j-1] + 1, dp[i-1][j-1] + 1});
        }
    }
    cout << dp[n-1][m-1];
    return 0;
}