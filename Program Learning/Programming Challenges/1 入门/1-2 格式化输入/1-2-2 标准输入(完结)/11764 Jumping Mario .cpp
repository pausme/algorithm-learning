//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        int nums;
        cin >> nums;
        int h_Jump = 0, l_Jump = 0, tmp = 0;
        cin >> tmp, nums--;
        while(nums--){
            int now;
            cin >> now;
            if(now > tmp) h_Jump++;
            else if(now < tmp) l_Jump++;
            tmp = now;
        }
        cout << "Case " << i << ": " << h_Jump << " " << l_Jump << endl;
    }
    return 0;
}