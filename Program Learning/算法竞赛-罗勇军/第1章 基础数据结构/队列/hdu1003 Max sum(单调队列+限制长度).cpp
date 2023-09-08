//
// Created by zx208 on 2023/7/7.
//
#include <bits/stdc++.h>
using namespace std;
deque<int > dq;
const int N = 1e5 + 10;
int s[N];
int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) cin >> s[i];
    for (int i = 1; i <= n; ++i) s[i] = s[i] + s[i-1];
    int ans = -1e8;
    dq.push_back(0);
    for (int i = 1; i <= n; ++i) {
        while(!dq.empty() && dq.front() < i-m) dq.pop_front();
        if(dq.empty()) ans = max(ans, s[i]);
        else ans = max(ans, s[i] - s[dq.front()]);
        while(!dq.empty() && s[dq.back()] >= s[i]) dq.pop_back();
        dq.push_back(i);
    }
    printf("%d\n", ans);
    return 0;
}