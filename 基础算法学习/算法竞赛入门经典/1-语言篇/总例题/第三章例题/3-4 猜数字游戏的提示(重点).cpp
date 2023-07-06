//
// Created by zx208 on 2023/6/7.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int a[N], b[N];

int main(){
    int n, times = 0;
    while (scanf("%d", &n) && n){
        cout << "Game " << ++times << ":";
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
            // 判定的问题——可以直接通过一层for循环来先得到pair.first
            // 然后再把其中一个数组放入map中，然后遍历另一个数组统计出现的次数 得到pair.second

        }
    }
    return 0;
}