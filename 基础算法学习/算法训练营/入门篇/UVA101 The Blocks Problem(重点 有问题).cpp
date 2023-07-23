//
// Created by zx208 on 2023/7/20.
//
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=37
//https://www.luogu.com.cn/problem/UVA101
#include <bits/stdc++.h>
using namespace std;

struct block{
    int id;
    block *next{nullptr};
    bool isTop{true};
} b[30];

bool check(int n1, int n2){
    block p = b[n2], t = b[n1];
    while(t.next != nullptr) {
        if(t.id == p.id) return true;
        t = *t.next;
    }
    while(p.next != nullptr){
        if(p.id == b[n1].id) return true;
        p = *p.next;
    }
    return false;
}

void Mymove(int a){ // 移除 a上面所有元素
    if(b[a].next == nullptr) return;
    block &p = b[a], temp;
    while(p.next != nullptr){
        temp = *p.next;
        p.next = nullptr;
        p = temp;
    }
}

void Mypile(int n1, int n2){ // 把 a整体放到 b上面
    block &p = b[n2], &t = b[n1];
    while(p.next != nullptr){
        p = *p.next;
    }
    p.next = &t;
    t.isTop = false;
}

int main(){
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        b[i].id = i;
    }
    string t1, t2;
    int n1, n2;
    while(cin >> t1){
        if(t1 == "quit") break;
        cin >> n1 >> t2 >> n2;
        if(n1 == n2) continue;
        if(check(n1, n2)) continue;
        if(t1 == "move" && t2 == "onto"){
            Mymove(n1);
            Mymove(n2);
            Mypile(n1, n2);
        }else if(t1 == "move" && t2 == "over"){
            Mymove(n1);
            Mypile(n1, n2);
        }else if(t1 == "pile" && t2 == "onto"){
            Mymove(n2);
            Mypile(n1, n2);
        }else{
            Mypile(n1, n2);
        }
    }
    block p;
    for (int i = 0; i < num; ++i) {
        printf("%d:", i);
        if(b[i].isTop){
            p = b[i];
            cout << " " << b[i].id;
            while(b[i].next != nullptr){
                cout << " " << p.id;
            }
        }
        cout << endl;
    }
    return 0;
}