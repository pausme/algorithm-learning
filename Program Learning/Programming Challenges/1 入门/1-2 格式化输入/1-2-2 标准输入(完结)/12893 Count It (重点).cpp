//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    while(cases--){
        long long int num, result = 0;
        cin >> num;
        while(num){
            result += num & 1;
            num /= 2;
        }
        cout << result << endl;
    }
    return 0;
}