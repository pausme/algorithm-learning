//
// Created by zx208 on 2023/6/7.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,flag = 0;
    while((s = getchar())!=EOF){
        if(s == '"'){
            if(flag == 0) {
                putchar('`');
                putchar('`');
                flag = 1;
            } else {
                putchar('\'');
                putchar('\'');
                flag = 0;
            }
        }else putchar(s);
    }
    return 0;
}