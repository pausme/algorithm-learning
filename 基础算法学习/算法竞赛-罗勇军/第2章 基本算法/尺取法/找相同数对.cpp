//
// Created by zx208 on 2023/7/8.
//
// 给定一个长度为num的数组和一个数target，计算出数组中任意两个数相减等于target的个数
// (不同位置的数字一样的数对算不同的数对)
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
map<int, int> mp;

int main(){
    int num, target, sum = 0;
    cin >> num >> target;
    for (int i = 0; i < num; ++i) {
        cin >> a[i];
        if(!mp.count(a[i])) mp[a[i]] = 0;
        mp[a[i]]++;
    }
    for (int i = 0; i < num; ++i) {
        if(mp.count(target + a[i])) {
            sum += mp[target + a[i]];
        }
    }
    cout << sum << endl;
    return 0;
}