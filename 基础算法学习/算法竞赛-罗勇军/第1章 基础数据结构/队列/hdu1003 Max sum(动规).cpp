//
// Created by zx208 on 2023/7/7.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int dp[N];
int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++) {
        int n;
        cin >> n;
//        memset(dp, 0, sizeof dp);
        for (int j = 1; j <= n; j++) cin >> dp[j];
        int start = 1, end = 1, p = 1;
        int maxsum = dp[1];
        for (int j = 1; j <= n; j++) {
            if (dp[j - 1] + dp[j] >= dp[j]) dp[j] = dp[j - 1] + dp[j];
            else p = i;
            if (dp[j] > maxsum) {
                maxsum = dp[j];
                start = p;
                end = j;
            }
        }
        printf("Case %d:\n", i);
        printf("%d %d %d\n", maxsum, start, end);
        if(i != T) cout << endl;
    }
    return 0;
}