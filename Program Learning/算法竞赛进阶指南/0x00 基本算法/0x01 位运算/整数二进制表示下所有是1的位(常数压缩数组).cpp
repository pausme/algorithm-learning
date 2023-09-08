//
// Created by zx208 on 2023/7/6.
//
#include <bits/stdc++.h>
using namespace std;
int H[37];
//任意k属于[0,35]，2^k mod 37 互不相等，且恰好取遍整数 1~36
int main(){
    for (int i = 0; i < 36; ++i) {
        H[1ll << i % 37] = i;
    }
    int n;
    while(cin >> n){
        while(n > 0){
            cout << H[(n & -n) % 37] << ' ';
            n -= n & -n;
            cout << endl;
        }
    }
    return 0;
}