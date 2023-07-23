//
// Created by zx208 on 2023/7/10.
//
//http://poj.org/problem?id=3122
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
const double PI = acos(-1);
int a[N];

bool cmp(int n1, int n2){
    return n1 > n2;
}

int main(){
    int times;
    cin >> times;
    while(times--) {
        int n, f;
        cin >> n >> f;
        memset(a, 0, sizeof a);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n, cmp);

    }

    return 0;
}