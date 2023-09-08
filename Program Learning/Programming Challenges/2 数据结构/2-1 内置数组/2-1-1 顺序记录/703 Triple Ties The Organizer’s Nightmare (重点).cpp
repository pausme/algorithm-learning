//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int a[N][N];

struct group{
    int a, b, c;
};

int main(){
    int cases;
    while(cin >> cases) {
        // 三局平局则递增输出序号
        memset(a, 0, sizeof a);
        for (int i = 1; i <= cases; ++i) {
            for (int j = 1; j <= cases; ++j) {
                cin >> a[i][j];
            }
        }
        vector<group > vec;
        for (int i = 1; i <= cases; ++i) {
            for (int j = 1; j <= cases; ++j) {
                for (int k = 1; k <= cases; ++k) {
                    if(i == j || j == k || k == i) continue;
                    // 平局
                    if(a[i][j] + a[j][k] + a[k][i] + a[i][k] + a[k][j] + a[j][i] == 0) {
                        if (i < j && j < k) {
                            vec.push_back(group{i, j, k});
                        }
                    }
                    // 循环
                    if(a[i][j] + a[j][k] + a[k][i] == 3){
                        if((i > j && j > k) || (i < j && j < k)) {
                            vec.push_back(group{i, j, k});
                        }
                    }
                }
            }
        }
        cout << vec.size() << '\n';
        for ( auto i : vec) {
            cout << i.a << " " << i.b << " " << i.c << '\n';
        }
    }
    return 0;
}