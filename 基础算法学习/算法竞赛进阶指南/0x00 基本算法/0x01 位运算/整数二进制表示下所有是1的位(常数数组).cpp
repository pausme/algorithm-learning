//
// Created by zx208 on 2023/7/6.
//
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1 << 20;
int H[MAX_N + 1];

int main(){
    int n;
    for (int i = 0; i <= 20; i++) H[1 << i] = i; // 相当于log2运算
    while (cin >> n) {
        while (n > 0) {
            cout << H[n & -n] << ' ';
            n -= n & -n;
            cout << endl;
        }
    }
    return 0;
}