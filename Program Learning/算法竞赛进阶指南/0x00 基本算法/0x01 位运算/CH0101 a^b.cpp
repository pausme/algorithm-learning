//
// Created by zx208 on 2023/6/20.
//
#include <iostream>
using namespace std;
// 1 <= a,b,p <= 1e9
int main(){
    int a, b, p;
    cin >> a >> b >> p;
    // b & 1 得到 b 在二进制下最低位
    // b >> 1 可以舍去 b 的最低位
    int ans = 1;
    for(; b; b >>= 1){ // while(b) b /= 2;
        if(b & 1) ans = (long long ) ans * a % p; // Ck 为1
        a = (long long ) a * a % p; // 记录累积的值
    }
    cout << ans;
    return 0;
}