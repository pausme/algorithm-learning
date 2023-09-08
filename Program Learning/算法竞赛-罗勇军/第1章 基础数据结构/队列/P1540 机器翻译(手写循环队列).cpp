//
// Created by zx208 on 2023/7/7.
//
// 这边因为懒就不想了，直接copy
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int Hash[N] = {0};

struct Myqueue{
    int data[N];
    int head, rear;

    bool init(){
        head = rear;
        return true;
    }
    int size(){
        return (rear - head + N) % N;
    }
    bool empty(){
        if(size() == 0) return true;
        else return false;
    }
    bool push(int e){
        if((rear + 1) % N == head) return false;
        data[rear] = e;
        rear = (rear + 1) % N;
        return true;
    }
    bool pop(int &e){
        if(head == rear) return false;
        e = data[head];
        head = (head + 1) % N;
        return true;
    }
    int front(){
        return data[head];
    }
} Q;

int main(){
    Q.init();
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    while(m--){
        int en;
        cin >> en;
        if(!Hash[en]){
            ++cnt;
            Q.push(en);
            Hash[en] = 1;
            while(Q.size() > n){
                int tmp;
                Q.pop(tmp);
                Hash[tmp] = 0;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}