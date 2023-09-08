//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int a[N];

int main(){
    int cases;
    cin >> cases;
    while(cases--){
        memset(a, 0, sizeof a);
        int num, sum = 0;
        cin >> num;
        for (int i = 1; i <= num; ++i) {
            cin >> a[i];
        }
        for (int i = num; i >= 1; --i) {
            int tmp = 0;
            for (int j = 1; j < i; ++j) {
                if(a[i] >= a[j]) tmp++;
            }
            sum += tmp;
        }
        cout << sum << '\n';
    }
    return 0;
}