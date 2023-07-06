//
// Created by zx208 on 2023/6/7.
//
#include <bits/stdc++.h>
using namespace std;
int a[6][6];
int main(){
    int b[6][6];
    memset(a, 0 , sizeof a);
    memcpy(b, a, sizeof(a));
    b[0][0] = 1;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}