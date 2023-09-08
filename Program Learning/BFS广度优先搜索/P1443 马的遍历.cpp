//
// Created by zx208 on 2023/4/22.
//
// 马踏飞燕/骑士周游问题
// BFS
#include <bits/stdc++.h>
using namespace std;

const int N = 410;
int st[N][N]; // st数组存储次数
int fx[] = {1,2,-1,-2,1,2,-1,-2}; // X方向
int fy[] = {2,1,2,1,-2,-1,-2,-1}; // Y方向
int n, m, x, y;
int main(){
    cin >> n >> m >> x >> y;
    memset(st, -1 , sizeof st);
    queue<int> qx, qy;
    qx.push(x);
    qy.push(y);
    st[x][y] = 0;
    while(!qx.empty()){
        int x_now = qx.front(), y_now = qy.front();
        qx.pop();
        qy.pop();
        for(int i = 0 ; i < 8 ; i++){
            // 得到队列中第一个元素
            int x_nxt = x_now + fx[i];
            int y_nxt = y_now + fy[i];
            if(x_nxt < 1  || x_nxt > n
               || y_nxt < 1 || y_nxt > m
               || st[x_nxt][y_nxt] != -1){ // 没有越界并且该位置没有访问过
                continue;
            }
            st[x_nxt][y_nxt] = st[x_now][y_now] + 1;
            qx.push(x_nxt);
            qy.push(y_nxt);
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            printf("%5d", st[i][j]);
        }
        cout << endl;
    }
    return 0;
}