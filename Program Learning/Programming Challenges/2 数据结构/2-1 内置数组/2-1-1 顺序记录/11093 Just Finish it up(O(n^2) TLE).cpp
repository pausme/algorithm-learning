//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N], b[N], c[N];

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cout << "Case " << i << ": ";
        int num;
        cin >> num;
        for (int j = 0; j < num; ++j) {
            cin >> a[j];
        }
        for (int j = 0; j < num; ++j) {
            cin >> b[j];
            c[j] = a[j] - b[j];
        }
        bool flag = false;
        int result = INT_MAX;
        for (int j = 0; j < num; ++j) {
            int sum = 0;
            for (int k = 0; k < num; ++k) {
                sum += c[(j + k) % num];
                if(sum < 0) break;
            }
            if(sum >= 0) {
                flag = true;
                result = min(result, j);
            }
        }
        if(flag) cout << "Possible from station " << (result + 1) << '\n';
        else cout << "Not possible" << '\n';
    }
    return 0;
}