//
// Created by zx208 on 2023/7/21.
//
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=243&page=show_problem&problem=3252
//https://www.luogu.com.cn/problem/UVA12100
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, n, m;
    cin >> T;
    while(T--){
        vector<int> a, b;
        queue<int> q;
        cin >> n >> m;
        int result = 0; // 所需分钟数
        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            a.push_back(temp);
            b.push_back(temp);
            q.push(i);
        }
        sort(b.begin(), b.end(), greater<int>());
        int index = 0, max_ = 0;
        while(!q.empty()){
            max_ = b[index];
            int temp = q.front();
            if(a[temp] < max_){ // 队列中还有更高优先级的任务
                q.pop();
                q.push(temp);
            }
            else{
                if(temp == m){ // 自己的任务序号
                    cout << ++result << endl;
                    break;
                } else{ // 不是自己的任务序号
                    q.pop();
                    result++;
                    index++;
                }
            }
        }
    }
    return 0;
}