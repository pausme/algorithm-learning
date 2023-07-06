//
// Created by zx208 on 2023/5/8.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, num = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int height, volume;
            cin >> height >> volume;
            volume /= (10*10);
            cout << volume << endl;
            volume > height ? num++ : num = num;
        }
    }
    printf("有%.2f%%的区域有水", (double ) 100.0 * num / (n*m));
    return 0;
}