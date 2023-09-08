//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        int num, max_n = INT_MIN, nums;
        cin >> nums;
        while(nums--){
            cin >> num;
            max_n = max(max_n, num);
        }
        cout << "Case " << i << ": " << max_n << endl;
    }
    return 0;
}