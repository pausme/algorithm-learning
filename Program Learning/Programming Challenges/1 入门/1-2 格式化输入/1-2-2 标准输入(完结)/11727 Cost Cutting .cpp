//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        cout << "Case " << i << ": " << min({max(n1, n2), max(n1, n3), max(n2, n3)}) << endl;
    }
    return 0;
}