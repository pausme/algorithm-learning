//
// Created by zx208 on 2023/5/6.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int index = 1, result = 0;
    for (int i = 0; i < str.length(); ++i) {
        if(str[i] == 'O') result += index++;
        else index = 1;
    }
    cout << result;
    return 0;
}