//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cout << "Case " << i << ":";
        char ch;
        int me[100], pointer = 0;
        memset(me, 0, sizeof me);
        while((ch = getchar()) != EOF){
            // 直接通过补码的方式来实现减法
            if(ch == '>') pointer = (pointer + 1) % 100;
            else if(ch == '<') pointer = (pointer + 99) % 100;
            else if(ch == '+') me[pointer] = (me[pointer] + 1) % 256;
            else if(ch == '-') me[pointer] = (me[pointer] + 255) % 256;
        }
        for (int j = 0; j < 100; ++j) {
            printf(" 02%x", me[j]);
        }
    }
    return 0;
}