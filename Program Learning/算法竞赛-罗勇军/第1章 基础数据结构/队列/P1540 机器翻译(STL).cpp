//
// Created by zx208 on 2023/7/7.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
queue<int> qu;
int a[N];
int main(){
    int n, m, times = 0;
    cin >> n >> m;
    memset(a, 0, sizeof a);
    while(m--){
        int se;
        cin >> se;
        if(!a[se]){ // 如何判断单词是否在内存当中——使用一个数组来记录队列中的数据
            times++;
            if(qu.size() == n){
                a[qu.front()]--;
                qu.pop();
            }
            qu.push(se);
            a[se]++;
        }
    }
    cout << times;
    return 0;
}