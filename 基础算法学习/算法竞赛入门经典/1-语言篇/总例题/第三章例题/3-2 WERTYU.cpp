//
// Created by zx208 on 2023/6/7.
//
#include <bits/stdc++.h>
using namespace std;
// 直接使用数组存储，然后通过下标来进行寻找
string s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(){
    char c;
    while((c = getchar()) != EOF){
        if(s.find(c) <= s.length()){
            putchar(s[s.find(c) - 1]);
        } else putchar(c);
    }
    return 0;
}