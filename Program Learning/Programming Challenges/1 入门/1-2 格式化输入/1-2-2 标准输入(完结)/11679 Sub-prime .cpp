//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;
// 就是从D银行向C银行进行转账，判断转账过程有没有银行破产
int main(){
    int B, N, money[30];
    while(cin >> B >> N, B && N){
        int D, C, V;
        for (int i = 1; i <= B; ++i) {
            cin >> money[i];
        }
        for (int i = 1; i <= N; ++i) {
            cin >> D >> C >> V;
            money[D] -= V;
            money[C] += V;
        }
        bool flag = false;
        for (int i = 1; i <= B; ++i) {
            if(money[i] < 0){
                flag = true;
                break;
            }
        }
        cout << (flag ? 'N' : 'S') << endl;
    }

    return 0;
}