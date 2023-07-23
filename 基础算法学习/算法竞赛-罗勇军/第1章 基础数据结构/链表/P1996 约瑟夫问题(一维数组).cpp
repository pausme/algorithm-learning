//
// Created by zx208 on 2023/7/7.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int node[N];

int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n-1; ++i) {
        node[i] = i+1; // node[i]的值就是下一个节点
    }
    node[n] = 1;
    int now = 1, prev = 1;
    while((n--) > 1){
        for (int i = 1; i < m; ++i) {
            prev = now;
            now = node[now];
        }
        printf("%d ", now);
        node[prev] = node[now]; // 将当前所指的下一个节点赋给当前上一个节点的下一个节点，即跳过当前节点
        now = node[prev];
    }
    printf("%d", now);
    return 0;
}