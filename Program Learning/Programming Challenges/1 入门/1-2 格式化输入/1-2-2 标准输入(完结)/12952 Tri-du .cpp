//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    while(cin >> A >> B){
        if(A == B) cout << A << endl;
        else A > B ? cout << A << endl : cout << B << endl;
    }
    return 0;
}