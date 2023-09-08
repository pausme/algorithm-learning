//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        double T1, T2, F, A, C1, C2, C3, C, result = 0;
        char a;
        cin >> T1 >> T2 >> F >> A >> C1 >> C2 >> C3;
        C = min({C1, C2, C3});
        C = (C1 + C2 + C3 - C) / 2;
        result = T1 + T2 + F + A + C;
        if(result >= 90) a = 'A';
        else if(result >= 80) a = 'B';
        else if(result >= 70) a = 'C';
        else if(result >= 60) a = 'D';
        else a = 'F';
        cout << "Case " << i << ": " << a << endl;
    }
    return 0;
}