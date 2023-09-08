//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        int num;
        bool flag = true;
        for (int j = 0; j < 13; ++j) {
            cin >> num;
            if(num == 0) flag = false;
        }
        cout << "Set #" << i << ": " << (flag ? "Yes" : "No") << endl;

    }
    return 0;
}