//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cout << "Case " << i << ": ";
        int n, I, k;
        cin >> n >> I >> k;
        int time_1 = 0, time_2 = 0, start = 0, end = I, status = 1;
        for (int j = 0; j < n; ++j) {
            int tmp;
            cin >> tmp;
            while(true) {
                if (tmp >= start && tmp < end) {
                    if (status == 0) time_2++;
                    else if (status == 2) {
                        time_1++;
                        start = tmp, end = tmp + k, status = 0;
                    } else {
                        start = tmp, end = tmp + I, status = 1;
                    }
                    break;
                } else {
                    if (status == 1) {
                        start = end, end = INT_MAX, status = 2;
                    } else if (status == 2) {
                        start = tmp, end = tmp + k, status = 0;
                    } else if (status == 0) {
                        start = end, end += I, status = 1;
                    }
                }
            }
        }
        cout << time_1 << " " << time_2 << endl;
    }
    return 0;
}