//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
int a[60];

int main(){
    int cases;
    while(cin >> cases, cases){
        memset(a, 0, sizeof a);
        string cards[60];
        int start = 0;
        string card, word;
        for (int i = 1; i <= cases; ++i) {
            int idx = 0;
            cin >> card >> word;
            while(true){
                if(!a[start]) idx++;
                if(idx == word.length()) break;
                start = (start + 1) % cases;
            }
            cards[start] = card;
            a[start] = 1;
        }
        for (int i = 0; i < cases; ++i) {
            if(i) cout << ' ';
            cout << cards[i];
        }
        cout << '\n';
    }
    return 0;
}