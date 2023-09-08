//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    while(cin >> cases){
        int num, result = 0;
        for (int i = 0; i < 5; ++i) {
            cin >> num;
            if(num == cases) result++;
        }
        cout << result << endl;
    }
    return 0;
}