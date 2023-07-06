//
// Created by zx208 on 2023/5/7.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int num[3] = {0};
    cin >> num[0] >> num[1] >> num[2];
    sort(num, num + 3);
    if(num[0] + num[1] < num[2]) {
        cout << "not a triangle";
        return 0;
    } else{
        if(num[0] * num[0] + num[1] * num[1] == num[2] * num[2]){
            cout << "yes";
        } else cout << "no";
    }
    return 0;
}
