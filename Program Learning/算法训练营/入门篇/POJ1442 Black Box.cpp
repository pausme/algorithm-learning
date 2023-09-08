//
// Created by zx208 on 2023/7/12.
//
//http://poj.org/problem?id=1442
#include <iostream>
#include <queue>
#include <functional>
using namespace std;
const int MAX = 30010;
priority_queue<long long int> q1;
priority_queue<long long int, vector<long long int>, greater<int> > q2;
int a[MAX];
int main(){
    int M, N;
    cin >> M >> N;
    for (int i = 1; i <= M; ++i) {
        cin >> a[i];
    }
    int cnt = 1; // 黑盒里面的元素个数
    while(N--){
        int temp;
        cin >> temp;
        while(cnt <= temp){
            if(!q1.empty() && a[cnt] < q1.top()){
                q2.push(q1.top());
                q1.pop();
                q1.push(a[cnt]);
            } else q2.push(a[cnt]);
            cnt++;
        }
        cout << q2.top() << endl;
        q1.push(q2.top());
        q2.pop();
    }
    return 0;
}

//7 4
//3 1 -4 2 8 -1000 2
//1 2 6 6