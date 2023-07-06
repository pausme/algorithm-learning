//
// Created by zx208 on 2023/6/7.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int raw, flag = 1;
    while((raw = getchar()) != EOF){ // 是否要使用getline? 还是使用getchar一个一个进行处理
        if(raw == '"'){
            flag ^= 1;
            if(flag) cout << "''";
            else cout << '"';
        } else printf("%c", raw);
    }
    return 0;
}