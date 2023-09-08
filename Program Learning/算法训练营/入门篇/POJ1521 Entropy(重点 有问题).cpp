//
// Created by zx208 on 2023/7/24.
//
//http://poj.org/problem?id=1521
#include <iostream>
#include <queue>
#include <cstring>
#include <functional>
#include <cstdio>
using namespace std;
int a[30];

int main(){
    string s;
    while(true){
        cin >> s;
        if(s == "END") break;
        memset(a, 0, sizeof a);
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            if(s[i] == '_') a[26]++;
            else a[s[i] - 'A']++;
        }
        priority_queue<int, vector<int>, greater<int> > q;
        for (int i = 0; i <= 26; ++i) {
            if(a[i]) q.push(a[i]);
        }
        int ans = n;
        // 需要考虑只出现1种字母的情况
        while(q.size() > 2){
            int temp1, temp2, t;
            temp1 = q.top(); q.pop();
            temp2 = q.top(); q.pop();
            t = temp1 + temp2;
            ans += t;
            q.push(t);
        }

        printf("%d %d %.1lf\n", n*8, ans, (double)n*8/ans);
    }
    return 0;
}