//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    double re[12];
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        double sum = 0, avg = 0, temp;
        memset(re, 0, sizeof re);
        for (int j = 0; j < 12; ++j) {
            cin >> re[j];
            sum += re[j];
        }
        avg = sum / 12;
        string str = to_string(avg);
        cout << i << " $" << str << endl;
    }
    return 0;
}