//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        int C, d;
        cin >> C >> d;
        double F = 5 * ((9.0 / 5 * C + 32 + d) - 32) / 9;
        cout << "Case " << i << ": ";
        printf("%.2lf\n", F);
    }

    return 0;
}