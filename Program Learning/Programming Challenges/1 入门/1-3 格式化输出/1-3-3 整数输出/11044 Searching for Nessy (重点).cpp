//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
/*
 * 铺满n行要n/3个,铺满m列要m/3个
 * 总共n/3 * m/3个
*/

int main(){
    int cases;
    cin >> cases;
    while(cases--){
        int n, m;
        cin >> n >> m;
        cout << (n/3) * (m/3) << endl;
    }
    return 0;
}