//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cout << "Case " << i << ": ";
        int num, result = 0, temp = 0;
        bool flag = true;
        cin >> num;
        for (int j = 1; j <= num; ++j) {
            char a;
            cin >> a;
            if(a != 'W') temp++;
            else temp = 0;
            if(flag && temp >= 3){
                flag = false;
                result = j;
            }
        }
        if(flag) cout << "Yay! Mighty Rafa persists!" << endl;
        else cout << result << endl;
    }
    return 0;
}