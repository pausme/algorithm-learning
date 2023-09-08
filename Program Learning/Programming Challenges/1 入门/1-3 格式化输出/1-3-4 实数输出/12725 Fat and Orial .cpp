//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cout << "Case #" << i << ": ";
        double N, M, result;
        int A, B;
        cin >> N >> M >> A >> B;
        result = (M * (A + B) - A * N) / B;
        if(result > 10 || result < 0) cout << "Impossible" << endl;
        else printf("%.2lf\n", result);
    }
    return 0;
}