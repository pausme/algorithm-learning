//
// Created by zx208 on 2023/7/21.
//
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=6&page=show_problem&problem=383
//https://www.luogu.com.cn/problem/UVA442
#include <bits/stdc++.h>
using namespace std;
// 矩阵乘法——A(m*n) * B(n*l) = C(m*l) 相乘次数为:m*n*l
map<char, pair<int, int> > mp;

int main(){
    int num;
    cin >> num;
    while(num--){
        // 如何存储矩阵数据
        char ch;
        int row, col;
        cin >> ch >> row >> col;
        mp[ch] = make_pair(row, col);
    }

    string s;
    while(cin >> s){

    }
    return 0;
}