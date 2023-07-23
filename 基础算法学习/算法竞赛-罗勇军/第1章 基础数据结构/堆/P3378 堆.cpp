//
// Created by zx208 on 2023/7/7.
//
//https://www.luogu.com.cn/problem/P3378
#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> q;
int main(){
    int n;
    cin >> n;
    while(n--){
        int op;
        cin >> op;
        if(op == 1){
            int x;
            cin >> x;
            q.push(x);
        } else if(op == 2){
            cout << q.top() << endl;
        } else q.pop();
    }
    return 0;
}