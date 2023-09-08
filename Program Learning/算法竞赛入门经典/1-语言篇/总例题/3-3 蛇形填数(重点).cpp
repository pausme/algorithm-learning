//
// Created by zx208 on 2023/4/23.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 10;
int a[N][N], n, x, y, Index = 0;
int main(){
    cin >> n;
    memset(a, 0 ,sizeof a);
    Index = a[x=0][y=n-1] = 1;
    while(Index < n*n){
        while(x+1<n && !a[x+1][y]) a[++x][y] = ++Index; // 左
        while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++Index; // 下
        while(x-1>=0 && !a[x-1][y]) a[--x][y] = ++Index; // 右
        while(y+1<n && !a[x][y+1]) a[x][++y] = ++Index; // 上
    }
    for(x = 0; x < n; x++){
        for(y = 0; y < n; y++) printf("%3d", a[x][y]);
        printf("\n");
    }
    return 0;
}