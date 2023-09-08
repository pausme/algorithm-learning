//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    while(cin >> N >> M){
        int result = 0, tmp;
        for (int i = 0; i < N; ++i) {
            bool flag = true;
            for (int j = 0; j < M; ++j) {
                cin >> tmp;
                if(tmp == 0) flag = false;
            }
            if(flag) result++;
        }
        cout << result << endl;
    }
    return 0;
}