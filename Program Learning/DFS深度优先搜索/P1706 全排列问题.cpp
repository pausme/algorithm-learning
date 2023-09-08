//
// Created by zx208 on 2023/4/21.
//

/*
 * 也可以使用 algorithm 中的 next_permutation函数
 * 例如：
 * const int N = 15;
 * int p[N];
 * int main(){
 *     int num;
 *     cin >> num;
 *     for(int i = 1 ; i <= num ; i++) p[i] = i;
 *     do{
 *         for(int i = 1 ; i <= num ; i++) printf("%5d", p[i]);
 *         printf("\n");
 *     }while(next_permutation(p+1, p+n+1)); // 左闭右开
 *     return 0;
 * }
 */

#include <bits/stdc++.h>
using namespace std;

const int N = 10;
int num;
int res[N],visit[N];

void dfs(int k){
    if(k == num + 1){
        for (int i = 1 ; i <= num ; i++) {
            printf("%5d", res[i]);
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= num; ++i) {
        if(!visit[i]){
            visit[i] = 1;
            res[k] = i;
            dfs(k+1);
            visit[i] = 0; // 回溯
        }
    }
//    return; 这里其实是有个return的
}

int main(){
    cin >> num;
    dfs(1);
    return 0;
}
