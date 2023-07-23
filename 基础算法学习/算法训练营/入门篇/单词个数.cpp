//
// Created by zx208 on 2023/7/11.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int sum = 0, index = 0, len = s.length();
    while(index != len){
        while(s[index] == ' ') index++; // 处理开头的空格和连续的空格
        if(index < len)sum++;
        while(s[index] != ' ' && index < len) index++;
    }
    cout << sum;
    return 0;
}