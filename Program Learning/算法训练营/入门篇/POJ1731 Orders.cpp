//
// Created by zx208 on 2023/7/20.
//
//http://poj.org/problem?id=1731
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    do{
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
    return 0;
}