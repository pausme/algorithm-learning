//
// Created by zx208 on 2023/8/20.
//
//https://www.luogu.com.cn/problem/UVA913
#include <iostream>
using namespace std;

int main(){
    long long int num;
    while(cin >> num){
        long long int result = 2 * 3 * (num+1)/2 * (num+1)/2 - 9;
        cout << result << endl;
    }
    return 0;
}