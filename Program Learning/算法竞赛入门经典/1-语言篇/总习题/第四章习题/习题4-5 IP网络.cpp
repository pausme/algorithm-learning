//
// Created by zx208 on 2023/5/8.
//
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int a[N][35], num;

int check(){
    int w = 0;
    for (int i = 0; i < 32; ++i) {
        for (int j = 1; j < num; ++j) {
            if(a[j][i] != a[0][i]) return w;
        }
        w++;
    }
    return w;
}

void change(int n, int i, int index){
    while(n){
        int x = n % 2;
        n /=2;
        a[i][32-index] = x;
        index++;
    }
}

int main(){
    cin >> num;
    memset(a, 0, sizeof a);
    for (int i = 0; i < num; ++i) {
        int n1, n2, n3, n4;
        scanf_s("%d.%d.%d.%d", &n1, &n2, &n3, &n4);
        int index = 1;
        change(n1, i, index+24);
        change(n2, i, index+16);
        change(n3, i, index+8);
        change(n4, i, index);
    }
    int w = check(), min_IP = 0, mask = 0;
    for(int i = 0; i < w; i++){
        if(a[0][i]) min_IP += pow(2,7-(i%8));
        if((i+1) % 8 == 0 || i == w-1) {
            cout << min_IP << "."[i == w-1];
            min_IP = 0;
        }
    }
    cout << endl;
    for (int i = 0; i < w; ++i) {
        mask += pow(2, 7-(i%8));
        if((i+1) % 8 == 0 || i == w-1){
            cout << mask << "."[i == w-1];
            mask = 0;
        }
    }
    return 0;
}

//3
//194.85.160.177
//194.85.160.183
//194.85.160.178