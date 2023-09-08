//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n1, n2;
        cin >> n1 >> n2;
        if(n1 > n2) cout << ">" << endl;
        else if(n1 < n2) cout << "<" << endl;
        else cout << "=" << endl;
    }
    return 0;
}