//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int a[N];

int main(){
    int nums;
    while (cin >> nums, nums){

        for (int i = 0; i < nums; ++i) {
            cin >> a[i];
        }
        int result = 0;
        for (int i = 0; i < nums; ++i) {
            int pre = (i + nums - 1) % nums, next = (i + 1) % nums;
            if(a[pre] < a[i] && a[i] > a[next]) result++;
            if(a[pre] > a[i] && a[i] < a[next]) result++;
        }
        cout << result << '\n';
    }
    return 0;
}