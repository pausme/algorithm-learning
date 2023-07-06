//
// Created by zx208 on 2023/4/23.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N];

int main(){
    int n, k;
    cin >> n >> k;
    memset(a, 0, sizeof a);
    for (int i = 1; i <= k; ++i) {
        for (int j = 1; j <= n; ++j) {
            if(j % i == 0) a[j] = !a[j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        if(a[i]) cout << i << " ";
    }
    return 0;
}