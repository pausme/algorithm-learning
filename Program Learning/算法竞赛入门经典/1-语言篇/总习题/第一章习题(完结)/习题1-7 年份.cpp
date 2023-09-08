//
// Created by zx208 on 2023/5/7.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin >> y;
    if((y % 4 == 0 && y % 100) || y % 400 == 0){
        cout << "yes";
    } else cout << "no";
    return 0;
}
