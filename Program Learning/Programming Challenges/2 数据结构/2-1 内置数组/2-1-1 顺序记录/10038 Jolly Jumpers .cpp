//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 3 * 1e3 + 10;
int a[N], Next[N];

int main(){
    string str;
    while(getline(cin, str), str.length() != 0) {
        memset(Next, 0, sizeof Next);
        istringstream iss(str);
        bool flag = true;
        int num;
        iss >> num;
        for (int i = 1; i <= num; ++i) {
            iss >> a[i];
        }

        for (int i = 2; i <= num; ++i) {
            Next[abs(a[i] - a[i-1])]++;
        }

        for (int i = 1; i <= num-1; ++i) {
            if(!Next[i]) {
                flag = false;
                break;
            }
        }
        if(flag) cout << "Jolly" << '\n';
        else cout << "Not jolly" << '\n';
    }
    return 0;
}