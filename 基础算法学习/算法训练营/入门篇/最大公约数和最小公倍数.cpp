//
// Created by zx208 on 2023/7/11.
//
#include <bits/stdc++.h>
using namespace std;

// 辗转相除法
int gcd1(int a, int b){
    int t = a % b;
    while(t != 0){
        a = b;
        b = t;
        t = a % b;
    }
    return b;
}

// 相减法
int gcd2(int a, int b){
    while(a != b){
        a > b ? a -= b : b -= a;
    }
    return a;
}

int lcm(int a, int b){
    return a * b / gcd1(a, b);
}

int main(){
    int a, b;
    cin >> a >> b;
    printf("使用辗转相除法的最大公约数为%d\n", gcd1(a, b));
    printf("使用相减法的最大公约数为%d\n", gcd2(a, b));
    printf("最大公倍数为%d", lcm(a, b));
    return 0;
}