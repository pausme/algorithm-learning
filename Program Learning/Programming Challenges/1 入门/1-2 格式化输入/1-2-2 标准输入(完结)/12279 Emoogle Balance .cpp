//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, cases = 0;
    while(cin >> num , num){
        int nums, d_n = 0, z_n = 0;
        while(num--){
            cin >> nums;
            nums != 0 ? d_n++ : z_n++;
        }
        cout << "Case " << ++cases << ": " << d_n - z_n << endl;
    }
    return 0;
}