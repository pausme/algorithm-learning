//
// Created by zx208 on 2023/7/24.
//
//http://poj.org/problem?id=3253
#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int main(){
    int num;
    while(cin >> num) {
        long long int sum = 0; // 一定要使用long long int
        priority_queue<int, vector<int>, greater<int> > q;
        for (int i = 0; i < num; ++i) {
            int temp;
            cin >> temp;
            q.push(temp);
        }
        if (q.size() == 1) {
            int temp1 = q.top();
            sum += temp1;
            q.pop();
        }
        while (q.size() > 1) {
            int temp1 = q.top();
            q.pop();
            int temp2 = q.top();
            q.pop();
            int t = temp1 + temp2;
            sum += t;
            q.push(t);
        }
        cout << sum;
    }
    return 0;
}