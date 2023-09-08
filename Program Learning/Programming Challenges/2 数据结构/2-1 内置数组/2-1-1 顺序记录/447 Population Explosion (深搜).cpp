//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 20;
int a[N][N];

int main(){
    // 输入的时候需要整行处理
    string str;
    getline(cin, str);
    int cases = stoi(str);
    getline(cin, str);

    for (int i = 1; i <= cases; ++i) {
        if(cases > 1) cout << '\n';
        memset(a, 0, sizeof a);
        int times, next[N][N], x, y;
        getline(cin, str);
        times = stoi(str);
        // 相邻-周边8个城市
        // 只有相邻城市数量为2或3才能存活
        // 某个空白位置相邻城市数量为3时变成城市
        while(getline(cin, str), str.length() > 0){
            istringstream iss(str);
            iss >> x >> y;
            a[x-1][y-1] = 1;
        }
        while(times--) {
            cout << "********************\n";
            for (int j = 0; j < 20; ++j) {
                for (int k = 0; k < 20; ++k) {
                    if(a[j][k]) cout << '0';
                    else cout << ' ';
                }
                cout << '\n';
            }
            memset(next, 0, sizeof next);
            for (int j = 0; j < 20; ++j) {
                for (int k = 0; k < 20; ++k) {
                    int living = 0;
                    for (int offsetx = -1; offsetx <= 1; ++offsetx) {
                        for (int offsety = -1; offsety <= 1; ++offsety) {
                            if(offsetx == 0 && offsety == 0) continue;
                            int nextj = j + offsetx, nextk = k + offsety;
                            if(nextj >= 0 && nextj < 20 && nextk >= 0 && nextk < 20 && a[j][k]) living++;
                        }
                    }
                    if(a[j][k]){
                        if(living >= 4 || living <= 1) next[j][k] = 0;
                        else next[j][k] = 1;
                    }else{
                        if(living == 3) next[j][k] = 1;
                    }
                }
            }
            memcpy(a, next, sizeof(next));
        }
        cout << "********************\n";
    }
    return 0;
}