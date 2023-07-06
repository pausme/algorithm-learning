//
// Created by zx208 on 2023/7/5.
//
//从1~n 这n(n < 20) 个整数中随机选取任意多个，输出所有可能的选择方案。
#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> vec;
void calc(int x){
    if(x == n+1){
        for (int i : vec) {
            printf("%d ", i);
        }
        cout << endl;
        return;
    }
    // 不选择x
    calc(x+1);
    // 选择x
    vec.push_back(x);
    calc(x+1);
    // 回溯
    vec.pop_back();
}

int main(){
    cin >> n;
    calc(1);
    return 0;
}