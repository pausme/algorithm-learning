//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int a[N], b[N], c[N], d[N];

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cout << "Cases #" << i << ": ";
        memset(d, 0, sizeof d);
        int n1, n2, n3, n1_n = 0, n2_n = 0, n3_n = 0;
        cin >> n1;
        memset(a, 0, sizeof a);
        for (int j = 0; j < n1; ++j) {
            cin >> a[j];
            d[a[j]]++;
        }
        cin >> n2;
        memset(b, 0,sizeof b);
        for (int j = 0; j < n2; ++j) {
            cin >> b[j];
            d[b[j]]++;
        }
        cin >> n3;
        memset(c, 0, sizeof c);
        for (int j = 0; j < n3; ++j) {
            cin >> c[j];
            d[c[j]]++;
        }
        for (int j = 0; j < n1; ++j) {
            if(d[a[j]] == 1) n1_n++;
        }
        for (int j = 0; j < n1; ++j) {
            if(d[b[j]] == 1) n2_n++;
        }
        for (int j = 0; j < n1; ++j) {
            if(d[c[j]] == 1) n3_n++;
        }
        int max_n = max({n1_n, n2_n, n3_n});
        if(n1_n == max_n) {
            cout << 1 << " " << n1_n;
            for (int j = 0; j < n1; ++j) {
                if(d[a[j]] == 1) cout << " " << a[j];
            }
            cout << '\n';
        }
        if(n2_n == max_n) {
            cout << 1 << " " << n2_n;
            for (int j = 0; j < n2; ++j) {
                if(d[b[j]] == 1) cout << " " << b[j];
            }
            cout << '\n';
        }
        if(n3_n == max_n) {
            cout << 1 << " " << n3_n;
            for (int j = 0; j < n3; ++j) {
                if(d[c[j]] == 1) cout << " " << c[j];
            }
            cout << '\n';
        }

    }
    return 0;
}