//
// Created by zx208 on 2023/7/20.
//
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=7&page=show_problem&problem=455
//https://www.luogu.com.cn/problem/UVA514
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int a[N];

int main(){
    int num;
    while(cin >> num && num){
        while(true) {
            // 怎么输入
            memset(a, 0, sizeof a);
            int index = 1;
            stack<int> s;
            cin >> a[1];
            if (a[1] == 0) break;
            for (int i = 2; i <= num; ++i) {
                cin >> a[i];
            }

            for (int j = 1; j <= num; ++j) {
                if (a[index] == j) index++;
                else s.push(j);
                while (!s.empty() && a[index] == s.top()) {
                    index++, s.pop();
                }
            }

            if (index <= num) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
        cout << endl;
    }
    return 0;
}