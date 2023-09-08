//
// Created by zx208 on 2023/5/6.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int n1[N], n2[N];
// 分成两大情况——一种是两个长条能够叠在一起进行放入，另一种则是无法叠放，所以只能头尾相连一样放入

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    for (int i = 0; i < num1; ++i) {
        cin >> n1[i];
    }
    for (int i = 0; i < num2; ++i) {
        cin >> n2[i];
    }
    for(int i = 0; i < num2; i++){
        for(int j = 0; j < num1)
    }
    return 0;
}