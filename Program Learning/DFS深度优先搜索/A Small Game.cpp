//
// Created by zx208 on 2023/4/21.
//
// 2021年东华大学金马程序设计大赛
/*
 * 给定四个整数 N,A,B和C
 * 现在你有一个整数 K，初始化为0、
 * 每次你可以选择其中一个操作
 * 1. 花费 A 对 K 进行加1
 * 2. 花费 B 对 K 进行乘2
 * 3. 花费 C 对 K 进行减1
 * 找到 K 变成 N 时的最小花费值
 * 测试集次数在 1e5 + 10内;
 * N, A, B, C 的大小都在 1 ~ 1e9的范围中
 */
// 倒序进行 N -> K(0)
// 当 N 是偶数的时候，要么/2，要么-1 dfs(偶数) = min(dfs(偶数/2) + B, dfs(偶数-1) + A)
// 当 N 是奇数的时候，要么+1，要么-1 dfs(奇数) = min(dfs(奇数-1) + A, dfs(奇数+1) + C)

#include <bits/stdc++.h>
using namespace std;
long long int N, A, B, C;
map<long long int, int> mp;
map<int, bool> vis;

long long int dfs(long long int x){
    if(x <= 0 && x > N+1) return 0;
    if(mp.count(x)) return mp[x];
    if(x % 2 == 0) return mp[x] = min(dfs(x/2) + B, dfs(x-1) + A);
    if(x % 2 == 1) return mp[x] = min(dfs(x-1) + A, dfs(x+1) + C);
}

int main(){
    while(scanf("%lld%lld%lld%lld",&N, &A, &B, &C) != EOF){
        printf("%lld\n", dfs(N));
        mp.clear();
        vis.clear();
    }
    return 0;
}