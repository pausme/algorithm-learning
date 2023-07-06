//
// Created by zx208 on 2023/7/5.
//
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;
void calc(int x){
    if(x == n+1){
        if(vec.size() < m) return;
        for (auto i : vec) {
            printf("%d ", i);
        }
        cout << endl;
        return;
    }
    // 不选x
    calc(x+1);
    // 选x
    vec.push_back(x);
    calc(x+1);
    // 回溯
    vec.pop_back();
}

int main(){
    cin >> n >> m;
    calc(1);
    return 0;
}