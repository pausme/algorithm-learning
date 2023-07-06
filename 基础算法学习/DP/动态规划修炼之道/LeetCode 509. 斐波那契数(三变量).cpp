//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/fibonacci-number/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, x2, x3, num;
    x1 = 1, x2 = 1;
    cin >> num;
    if(num == 1) cout << x1;
    else if(num == 2) cout << x2;
    else{
        num -= 2;
        while(num--) {
            x3 = x1 + x2;
            x1 = x2;
            x2 = x3;
        }
        cout << x3;
    }
    return 0;
}