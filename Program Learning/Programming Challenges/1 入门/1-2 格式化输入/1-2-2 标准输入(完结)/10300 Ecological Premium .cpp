//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long sum = 0;
    int num;
    cin >> num;
    while(num--){
        int nums;
        cin >> nums;
        while(nums--){
            int n1, n2, n3;
            cin >> n1 >> n2 >> n3;
            sum += n1 * n3;
        }
    }
    return 0;
}