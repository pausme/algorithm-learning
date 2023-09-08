//
// Created by zx208 on 2023/7/22.
//
//https://www.luogu.com.cn/problem/P1305
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int l[N], r[N];

void PreOrder(int t){
    if(t != '*' - 'a'){
        cout << char(t + 'a');
        PreOrder(l[t]);
        PreOrder(r[t]);
    }
}

int main(){
    int num, root;
    cin >> num;
    string s;
    for (int i = 0; i < num; ++i) {
        cin >> s;
        if(i == 0) root = s[0] - 'a';
        l[s[0] - 'a'] = s[1] - 'a';
        r[s[0] - 'a'] = s[2] - 'a';
    }
    PreOrder(root);
    return 0;
}