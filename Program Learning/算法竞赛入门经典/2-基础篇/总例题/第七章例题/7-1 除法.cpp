//
// Created by zx208 on 2023/5/9.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    char buf[100];
    int num;
    cin >> num;
    for(int i = 1234; i < 98765; i++){
        set<char> s;
        int result = i * num;
        sprintf(buf, "%d%d",result, i);
        for(auto item : buf){
            s.insert(item);
        }
    }
    return 0;
}