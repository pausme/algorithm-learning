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
        cin >> num;
        cout << "Case #" << i << ": " << 2*num-1 << endl;
    }
    return 0;
}