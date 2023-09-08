//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;

int main(){
    int cases, a[N];
    cin >> cases;
    while(cases--){
        memset(a, 0 , sizeof a);
        int nums, num = 0, sum = 0;
        double avg = 0;
        cin >> nums;
        for (int i = 0; i < nums; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        avg = sum / nums;
        for (int i = 0; i < nums; ++i) {
            if(a[i] > avg) num++;
        }
        printf("%.3lf%\n", 100.0 * num / nums);
    }
    return 0;
}