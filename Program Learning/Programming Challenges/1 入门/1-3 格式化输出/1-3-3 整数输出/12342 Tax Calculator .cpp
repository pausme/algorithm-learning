//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        int k, result = 0, temp = 0;
        cin >> k;
        if(k <= 180000) result = 0;
        else if(k <= 480000){
            (temp = ceil((k - 180000) * 0.1)) >= 2000 || (temp = 2000);
            result += temp;
        }else if(k <= 880000){
            result += ((int )ceil((k - 480000) * 0.15)) + 30000;
        }else if(k <= 1180000){
            result += ((int )ceil((k - 880000) * 0.2)) + 90000;
        }else{
            result += ((int )ceil((k - 1180000) * 0.25)) + 150000;
        }
        cout << "Case " << i << ": " << result << endl;
    }
    return 0;
}