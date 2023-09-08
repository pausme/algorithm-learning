//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b, a != -1 && b != -1){
        cout << min(abs((b - a) % 100), 100 - abs( (b - a) % 100)) << endl;
    }
    return 0;
}