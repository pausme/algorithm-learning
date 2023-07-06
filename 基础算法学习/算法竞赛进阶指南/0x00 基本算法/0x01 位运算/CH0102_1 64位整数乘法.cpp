//
// Created by zx208 on 2023/7/5.
//
#include <bits/stdc++.h>
using namespace std;
// 1 <= a,b,p <= 1e18
int main(){
    long long int a, b, p;
    cin >> a >> b >> p;
    long long int ans = 1 % p;
    for(; b; b >>= 1){
        if(b & 1) ans = (ans + a) % p;
        a = a * 2 % p;
    }
    cout << ans;
    return 0;
}