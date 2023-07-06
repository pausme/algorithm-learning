//
// Created by zx208 on 2023/7/6.
//
#include <iostream>
using namespace std;

long long int fun(long long A, long long int B, long long int M){
    long long int ans = 1 % M;
    for (; B; B >>= 1) {
        if(B & 1) ans = (long long ) ans * A % M;
        A = (long long ) A * A % M;
    }
    return ans;
}

int main() {
    long long int n;
    cin >> n;
    while (n--) {
        long long int M, H, result = 0;
        cin >> M >> H;
        while (H--) {
            int A, B;
            cin >> A >> B;
            result += fun(A, B, M);
            result %= M;
        }
        cout << result << endl;
    }
    return 0;
}