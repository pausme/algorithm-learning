//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, n3, n4, n5, nn1, nn2, nn3, nn4, nn5;
    while(cin >> n1 >> n2 >> n3 >> n4 >> n5){
        cin >> nn1 >> nn2 >> nn3 >> nn4 >> nn5;
        if(n1 ^ nn1 && n2 ^ nn2 && n3 ^ nn3 && n4 ^ nn4 && n5 ^ nn5) cout << 'Y' << endl;
        else cout << 'N' << endl;
    }
    return 0;
}