//
// Created by zx208 on 2023/5/6.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    // 周期串 我们必须一直遍历下去，防止有特例发生。
    string raw;
    cin >> raw;
    int min_length = INT_MAX;
    for (int i = 1; i < raw.length(); ++i) {
        string s = raw.substr(0, i);
        int flag = 0;
        for (int j = 0; j < raw.length(); j+= s.length()) {
            string temp = raw.substr(j, s.length());
            if(s != temp) break;
            flag++;
        }
        if(flag * s.length() == raw.length() && s.length() <= min_length) min_length = s.length();
    }
    cout << raw.substr(0, min_length);
    return 0;
}