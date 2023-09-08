//
// Created by zx208 on 2023/8/20.
//
#include <iostream>
#include <bitset>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int num;
    while(cin >> num){
        printf("%d converts to ", num);
        bitset<32> l(num);
        string temp = l.to_string();
        string result = temp.substr(24,8) + temp.substr(16,8) + temp.substr(8, 8) + temp.substr(0, 8);
        if(result[0] == '0'){
            bitset<32> r(result);
            cout << r.to_ulong() << endl;
        }else{
            result.front() = '0';
            bitset<32> r(result);
            cout << (int)(-pow(2,31) + r.to_ulong()) << endl;
        }
    }
}