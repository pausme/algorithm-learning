//
// Created by zx208 on 2023/7/5.
//
#include <bits/stdc++.h>
using namespace std;

int n;
int visit[12], result[12];
void calc(int x){
    if(x == n+1){
        for(int i = 1; i <= n; i++){
            printf("%d ", result[i]);
        }
        cout << endl;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!visit[i]){
            visit[i] = 1;
            result[x] = i;
            calc(x+1);
            // 回溯
            visit[i] = 0;
        }
    }
}
int main(){
    cin >> n;
    calc(1);
    return 0;
}