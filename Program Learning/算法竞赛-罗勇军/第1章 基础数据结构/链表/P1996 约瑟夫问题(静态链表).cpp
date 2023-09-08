//
// Created by zx208 on 2023/7/7.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 105;

struct node{
    int id;
    int nextid;
}Node[N];

int main(){
    int n, m;
    cin >> n >> m;
    Node[0].nextid = 1;
    for(int i = 1; i <= n; i++){
        Node[i].id = i;
        Node[i].nextid = i+1;
    }
    Node[n].nextid = 1;
    int now = 1, prev = 1;
    while((n--) > 1){
        for(int i = 1; i < m; i++){
            prev = now;
            now = Node[now].nextid;
        }
        printf("%d ", Node[now].id);
        Node[prev].nextid = Node[now].nextid;
        now = Node[prev].nextid;
    }
    printf("%d", Node[now].id);
    return 0;
}