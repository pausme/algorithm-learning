//
// Created by zx208 on 2023/7/10.
//
//https://www.luogu.com.cn/problem/P1824
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, c, a[N];

bool check(int mid){
    int cnt = 1, place = 0;
    for (int i = 1; i < n; ++i) {
        if(a[i] - a[place] >= mid){
            cnt++;
            place = i;
        }
    }
    if(cnt >= c) return true;
    else return false;
}

int main(){

    cin >> n >> c;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n);
    int left = 0, right = a[n-1] - a[0], ans = 0; // right取最大值和最小值的差，也可以取N
    while(left <= right){
        int mid = left - (left - right)/2;
        if(check(mid)){
            ans = mid;
            left = mid + 1;
        } else right = mid - 1;
    }
    cout << ans;
    return 0;
}