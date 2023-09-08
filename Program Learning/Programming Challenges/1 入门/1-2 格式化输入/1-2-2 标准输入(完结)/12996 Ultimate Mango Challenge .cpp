//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cout << "Case " << i << ": ";
        int N, L, S = 0, A[16], B[16];
        cin >> N >> L;
        for (int j = 0; j < N; ++j) {
            cin >> A[j];
            S += A[j];
        }
        for (int j = 0; j < N; ++j) {
            cin >> B[j];
        }
        bool flag = (S <= L);
        if(flag){
            for (int j = 0; j < N; ++j) {
                if(A[j] > B[j]) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}