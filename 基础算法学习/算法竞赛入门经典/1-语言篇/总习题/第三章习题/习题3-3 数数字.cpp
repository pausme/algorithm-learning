//
// Created by zx208 on 2023/5/6.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int result[10] = {0};
    for (char i : str) {
        result[i - '0']++;
    }
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}