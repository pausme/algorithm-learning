//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b, a && b){
        int nums = 0;
        for (int i = 0; i*i <= b; i++) {
            if(i * i < a) continue;
            else nums++;
        }
        cout << nums << '\n';
    }
    return 0;
}