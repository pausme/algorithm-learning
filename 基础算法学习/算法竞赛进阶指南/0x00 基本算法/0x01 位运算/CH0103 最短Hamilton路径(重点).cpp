//
// Created by zx208 on 2023/7/5.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 12;
int w[N][N]; // 各节点到各个节点的距离，也就是权重
bool visited[N]; // 是否访问过该节点

int main(){
    int n;
    cin >> n;
    memset(w, 0 ,sizeof w);
    memset(visited, 0, sizeof visited);
    // 输入 i 节点到 j 节点的距离
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> w[i][j];
        }
    }
    // 这边可以直接采用枚举全排列来计算路径最小值
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {

        }
    }
    return 0;
}