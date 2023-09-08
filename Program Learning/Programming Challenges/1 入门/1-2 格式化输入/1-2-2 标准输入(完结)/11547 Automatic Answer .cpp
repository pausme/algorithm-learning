//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int nums;
        cin >> nums;
        int result = (nums * 63 + 7492) * 235 / 47 - 498;
        result < 0 ? result -= (2*result) : result;
        cout << (result % 100) / 10 << endl;
    }
    return 0;
}