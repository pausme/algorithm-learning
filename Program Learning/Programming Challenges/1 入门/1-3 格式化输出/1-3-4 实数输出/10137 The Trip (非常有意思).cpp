//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;

int main(){
    int nums;
    double a[N];
    while(cin >> nums, nums){
        memset(a, 0, sizeof a);
        double av = 0, result = 0;
        for (int i = 0; i < nums; ++i) {
            cin >> a[i];
            result += a[i];
        }
        av = result / nums;
        result = 0;
        for (int i = 0; i < nums; ++i) {
            if(a[i] > av){
                result += (a[i] - av);
            }
        }
        printf("$%.2lf\n", result);
    }
    return 0;
}