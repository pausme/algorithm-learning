//
// Created by zx208 on 2023/4/22.
//


#include <bits/stdc++.h>
using namespace std;

const int n = 210;
int N, A, B;
int st[n],vis[n];
int main(){
    int now = A;
    memset(vis, -1, sizeof vis);
    cin >> N >> A >> B;
    for (int i = 1; i <= N; ++i) {
        cin >> st[i];
    }
    queue<int> qx, qy;
    qx.push(st[A]);
    while(!qx.empty()){
        int Index_up = now + qx.front();
        int Index_down = now - qx.front();
        qx.pop();
        if(Index_up > N){

        }
    }
    return 0;
}