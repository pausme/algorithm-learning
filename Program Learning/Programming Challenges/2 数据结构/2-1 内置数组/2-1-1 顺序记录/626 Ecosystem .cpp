//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int a[N][N];

int main(){
    int n;
    while(cin >> n){
        memset(a, 0, sizeof a);
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cin >> a[i][j];
            }
        }
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                for (int k = 1; k <= n; ++k) {
                    if(i == j || j == k || i == k) continue;
                    if(a[i][j] && a[j][k] && a[k][i]){
                        if((i < j && j < k) ||(i > j && j > k)){
                            cout << i << " " << j << " " << k << '\n';
                            sum++;
                        }
                    }
                }
            }
        }
        cout << "total:" << sum << "\n\n";
    }
    return 0;
}