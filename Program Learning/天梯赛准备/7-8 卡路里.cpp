//
// Created by zx208 on 2023/7/19.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 * 3 +10;
int M[N], V[N], dp[N];

int main(){
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> M[i] >> V[i];
    }
    while(k--){
        int c;
        cin >> c;
        for (int i = 0; i < n; ++i) {
            for (int j = c; j >= M[i]; --j) {
                dp[j] = max(dp[j], dp[j-M[i]] + V[i]);
            }
        }
    }
    return 0;
}