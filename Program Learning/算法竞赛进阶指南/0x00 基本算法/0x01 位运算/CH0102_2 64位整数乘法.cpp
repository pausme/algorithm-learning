//
// Created by zx208 on 2023/7/5.
//
#include <bits/stdc++.h>
using namespace std;
// 1 <= a,b,p <= 1e18
int main(){
    // a*b mod p -> a*b - floor(a*b/p)*p
    long long int a, b, p;
    cin >> a >> b >> p;
    a %= p, b %= p;
    long long c = (long double) a * b / p;
    long long ans = a * b - c * p;
    if(ans < 0) ans += p;
    else if( ans >= p) ans -= p;
    cout << ans;
    return 0;
}