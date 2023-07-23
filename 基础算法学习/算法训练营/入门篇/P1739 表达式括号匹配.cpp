//
// Created by zx208 on 2023/7/20.
//
//https://www.luogu.com.cn/problem/P1739
#include <bits/stdc++.h>
using namespace std;
stack<char> s;

int main(){
    char ch;
    while(cin >> ch && ch != '@'){
        if(ch == '(') s.push(ch);
        if(ch == ')'){
            if(s.empty()) {
                cout << "NO" << endl;
                return 0;
            } else s.pop();
        }
    }
    if(s.empty()) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}