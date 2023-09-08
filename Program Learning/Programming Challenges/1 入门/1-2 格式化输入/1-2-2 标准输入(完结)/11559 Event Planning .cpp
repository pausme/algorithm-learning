//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, B ,H ,W;
    while(cin >> N >> B >> H >> W){
        int sum_Fee = INT_MAX;
        while(H--){
            int fee;
            cin >> fee;
            for(int i = 0; i < W; i++){
                int tmp;
                cin >> tmp;
                if(tmp >= N) {
                    sum_Fee = min(sum_Fee, N * fee);
                }
            }
        }
        if(sum_Fee > B) cout << "stay home" << endl;
        else cout << sum_Fee << endl;
    }
    return 0;
}