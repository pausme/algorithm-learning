//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int a[N][N];

int main(){
    int cases;
    while(cin >> cases, cases) {
        for (int i = 0; i < cases; ++i) {
            for (int j = 0; j < cases; ++j) {
                cin >> a[i][j];
            }
        }
        int row, col, row_n = 0, col_n = 0;
        for (int i = 0; i < cases; ++i) {
            int row_sum = 0, col_sum = 0;
            for (int j = 0; j < cases; ++j) {
                row_sum += a[i][j];
                col_sum += a[j][i];
            }
            if (row_sum % 2 == 1) row_n++, row = i;
            if (col_sum % 2 == 1) col_n++, col = i;
        }
        if (row_n == 0 && col_n == 0) cout << "OK\n";
        else if (row_n == 1 && col_n == 1) cout << "Change bit (" << (row + 1) << "," << (col + 1) << ")\n";
        else cout << "Corrupt\n";
    }
    return 0;
}