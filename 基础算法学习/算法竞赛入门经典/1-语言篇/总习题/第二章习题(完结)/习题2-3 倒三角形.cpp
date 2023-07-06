//
// Created by zx208 on 2023/4/23.
//
#include <bits/stdc++.h>

using namespace std;
int num;
int main(){
    cin >> num;
    for(int i = 1 ; i <= num ; ++i){
        for(int j = 1 ; j < i ; j++){ // 0 ~ num-1
            cout << " ";
        }
        for(int j = 1 ; j <= 2 * (num - i) + 1 ; j++){
            cout << "#";
        }
        if(i != num) cout << endl;
    }
    return 0;
}