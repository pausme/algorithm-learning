//
// Created by zx208 on 2023/4/22.
//
// 马踏飞燕/骑士周游问题
// BFS
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

const int N = 310;
int st[N][N]; // st数组存储次数
int fx[] = {1,2,-1,-2,1,2,-1,-2}; // X方向
int fy[] = {2,1,2,1,-2,-1,-2,-1}; // Y方向
int n, m, x, y, times, len;
int main(){
    cin >> times;
    while(times--) {
        cin >> len >> n >> m >> x >> y;
        memset(st, -1, sizeof st);
        queue<int> qx, qy;
        qx.push(n+1);
        qy.push(m+1);
        st[n+1][m+1] = 0;
        while (!qx.empty()) {
            int x_now = qx.front(), y_now = qy.front();
            qx.pop();
            qy.pop();
            for (int i = 0; i < 8; i++) {
                // 得到队列中第一个元素
                int x_nxt = x_now + fx[i];
                int y_nxt = y_now + fy[i];
                if (x_nxt < 1 || x_nxt > len
                    || y_nxt < 1 || y_nxt > len
                    || st[x_nxt][y_nxt] != -1) { // 没有越界并且该位置没有访问过
                    continue;
                }
                st[x_nxt][y_nxt] = st[x_now][y_now] + 1;
                qx.push(x_nxt);
                qy.push(y_nxt);
            }
        }
        cout << st[x+1][y+1] << endl;
    }
    return 0;
}