//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;
const int n = 1e4 + 10;
int a[n];

int main(){
    int N, R;
    while(cin >> N >> R){
        memset(a, 0, sizeof a);
        int sum = 0;
        for (int i = 0; i < R; ++i) {
            int num;
            cin >> num;
            a[num] = 1;
            sum++;
        }
        if(sum == N) cout << "*" << endl;
        else {
            for (int i = 1; i <= N; ++i) {
                if (a[i] == 0) cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}