//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int a[N];
// 给你N个数，让你判断这里面是不是存在等差数列，项数>2

int main(){
    int num;
    while(cin >> num, num){
        char ch;
        cin >> ch;
        for (int i = 0; i < num; ++i) {
            int nums;
            cin >> nums;
            a[nums] = i;
        }

        bool flag = true;
        for (int i = 0; i < num; ++i) {
            for (int d = 1; d < num - i; ++d) {
                if(i - d >= 0 && i + d < num){
                    if(a[i-d] < a[i] && a[i] < a[i+d] || a[i-d] > a[i] && a[i] > a[i+d]){
                        flag = false;
                        break;
                    }
                }
            }
        }
        cout << (flag ? "yes" : "no") << '\n';
    }
    return 0;
}