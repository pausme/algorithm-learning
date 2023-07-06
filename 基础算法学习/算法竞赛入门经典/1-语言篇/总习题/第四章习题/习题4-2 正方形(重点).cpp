//
// Created by zx208 on 2023/5/8.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 15;
// 难点就是如何存储下来每条边
// 这边选择是开两个数组 分别储存行和列的边
int row[N][N], column[N][N], nums[N], n, m;

void check(){
    // 遍历每个点来判断是否有正方形存在
    for (int i = 1; i <= n; ++i) { // 行
        for (int j = 1; j <= n; ++j) { // 列
            for(int k = 1; k <= min(n-i, n-j); k++){ // 正方形边长
                bool flag = true;
                for(int l = 0; l < k; l++){
                    if(!(row[i][j+l] && row[i+k][j+l])) {
                        flag = false;
                        break;
                    }
                    if(!(column[i+l][j] && column[i+l][j+k])) {
                        flag = false;
                        break;
                    }
                }
                if(flag) nums[k]++;
            }
        }
    }
}

int main(){
    int temp = 1;
    while(scanf("%d%d", &n, &m) == 2) {
        cout << "Problem #" << temp++ << endl << endl;
        memset(row, 0, sizeof row);
        memset(column, 0, sizeof column);
        memset(nums, 0, sizeof nums);
        // 初始化
        for (int x = 0; x < m; ++x) {
            char a;
            int i, j;
            cin >> a >> i >> j;
            if (a == 'H') {
                row[i][j] = 1;
            } else {
                column[i][j] = 1;
            }
        }
        check();
        int num = 0;
        for (int i = 1; i <= n; i++) {
            if (nums[i]) {
                num++;
                cout << nums[i] << " square (s) of size " << i << endl;
            }
        }
        if (num == 0) cout << "No completed squares can be found." << endl;
        cout << endl;
        cout << "**********************************" << endl << endl;
    }
    return 0;
}