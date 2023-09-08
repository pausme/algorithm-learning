//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long int n1, n2;
        cin >> n1 >> n2;
        if(n2 > n1 || (n1+n2) % 2) cout << "impossible" << endl;
        else cout << (n1 + n2)/2 << " " << (n1 - n2)/2 << endl;
    }
    return 0;
}