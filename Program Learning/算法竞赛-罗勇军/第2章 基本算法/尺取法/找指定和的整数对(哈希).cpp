//
// Created by zx208 on 2023/7/8.
//
// 类似两数之和
//https://leetcode.cn/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
set<int> s;

int main(){
    int n, index = 0;
    while(scanf("%d", &n)){
        a[index++] = n;
    }
    for(int i = 0; i < index-1; i++){
        if(s.find(a[index-1] - a[i]) == s.end()) s.insert(a[i]);
        else cout << a[index-1] - a[i] << " " << a[i];
    }
    return 0;
}