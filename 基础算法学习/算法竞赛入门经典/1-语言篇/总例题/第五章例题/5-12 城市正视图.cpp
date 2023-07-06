//
// Created by zx208 on 2023/5/9.
//
#include <bits/stdc++.h>
using namespace std;

struct Buliding{
    int x;
    int y;
    int w;
    int d;
    int h;
}buliding[110];

int main(){
    int n;
    while(scanf("%d", &n) && n){
        for (int i = 1; i <= n; ++i) {
            cin >> buliding[i].x >> buliding[i].y >> buliding[i].w >> buliding[i].d >> buliding[i].h;

        }
    }
    return 0;
}