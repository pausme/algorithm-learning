//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int P, H ,O;
    while(cin >> P >> H >> O){
        if(P + H > O) cout << "Hunters win!"<< endl;
        else cout << "Props win!" << endl;
    }
    return 0;
}