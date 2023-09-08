//
// Created by zx208 on 2023/7/19.
//
//http://poj.org/problem?id=3481
#include <iostream>
#include <map>
#include <cstdio>
using namespace std;
map<int, int> mp;

int main(){
    int op, K, P;
    while(scanf("%d", &op) && op){
        switch (op) {
            case 1:
                scanf("%d%d", &K, &P);
                mp[P] = K;
                break;
            case 2:
                if(mp.empty()) cout << 0 << endl;
                else {
                    map<int, int>::iterator it = --mp.end();
                    printf("%d\n",it->second);
                    mp.erase(it);
                }
                break;
            case 3:
                if(mp.empty()) cout << 0 << endl;
                else{
                    map<int, int>::iterator it = mp.begin();
                    printf("%d\n",it->second);
                    mp.erase(it);
                }
                break;
        }
    }
    return 0;
}