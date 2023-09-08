//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
// 座位顺序从原来的顺时针方向变为逆时针方向
const int N = 32768;

int main(){
    int cases;
    cin >> cases;
    int a[N] = {0, 0, 0};
    int num;
    for (int i = 3, j = 1; i <= 32767; i += 2, j++) {
        a[i] = a[i-1] + j;
        a[i+1] = a[i] + j;
    }
    while(cases--){
        cin >> num;
        cout << a[num] << '\n';
    }
    return 0;
}