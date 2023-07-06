//
// Created by zx208 on 2023/5/6.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 0, j = 0;
    string s, t;
    cin >> s >> t;
    for (; i < s.length() && j < t.length(); i++) {
        if(t[j] == s[i]) j++;
    }
    if(j == t.length()) cout << 1;
    else cout << 0;
    return 0;
}