//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    while(cin >> N >> M){
        int result = 0;
        for (int i = 0; i < M; ++i) {
            int B, D, sum = 0, temp;
            cin >> B >> D;
            for (int j = 1; j < N; ++j) {
                cin >> temp;
                sum += temp;
            }
            sum += D;
            temp = D;
            if(sum < B) {
                while (sum - temp + 10 * D <= B) {
                    D *= 10;
                    if(D == 1e5) {
                        D = 1e4;
                        break;
                    }
                }
                result += (D - temp);
            }else if(sum > B){
                while(sum - temp + D > B){
                    D /= 10;
                    if(D == 0) break;
                }
                result += D;
            }
        }
        cout << result << endl;
    }
    return 0;
}