//
// Created by zx208 on 2023/6/4.
//
//https://leetcode.cn/problems/palindromic-substrings/
#include <bits/stdc++.h>
using namespace std;
const int N = 1000 + 10;
bool dp[N][N]; // dp -> 代表 i~j 区间内字符串是回文子串

int main(){
    int result = 0;
    string str;
    cin >> str;
    memset(dp, 0, sizeof dp);

    for(int i = str.size()-1; i >=0; --i){
        for(int j = i; j < str.size(); j++){
            if(str[i] == str[j]){
                if(j - i <= 1){
                    dp[i][j] = true;
                    result++;
                } else if(dp[i+1][j-1]){
                    dp[i][j] = true;
                    result++;
                }
            }
        }
    }
    cout << result;
    return 0;
}