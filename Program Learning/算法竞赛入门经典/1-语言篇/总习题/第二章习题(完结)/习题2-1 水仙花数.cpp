//
// Created by zx208 on 2023/4/23.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 100; i <= 999; ++i){ // i = 789
        int temp = i;
        int b = temp /100, s = temp/10 %10, g = temp % 10;
        int result = b*b*b + s*s*s + g*g*g;
        if( temp == result) cout << temp << endl;
    }
    return 0;
}