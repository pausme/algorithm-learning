//
// Created by zx208 on 2023/4/23.
//
#include <bits/stdc++.h>
using namespace std;
int a, b ,c, number = 1;
int main(){
    while(scanf("%d%d%d", &a, &b, &c)){
        for(int i = 1; i <= 100 ; i++){
            if(i % 3 == a && i % 5 == b && i % 7 == c) {
                cout << "Case " << number++ << ": " << i << endl;
                break;
            }
        }
        cout << "Case " << number++ << ": No answer" << endl;
    }
    return 0;
}