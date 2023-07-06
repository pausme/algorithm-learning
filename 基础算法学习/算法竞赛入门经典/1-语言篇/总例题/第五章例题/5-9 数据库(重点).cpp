//
// Created by zx208 on 2023/5/9.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
string str[N][15];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; ++j) {
            // 如何进行逗号分隔的可变字符串的输入
            cin >> str[i][j];
        }
    }

    return 0;
}