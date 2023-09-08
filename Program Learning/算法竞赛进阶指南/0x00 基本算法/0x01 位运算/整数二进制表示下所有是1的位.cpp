//
// Created by zx208 on 2023/7/6.
//
#include <bits/stdc++.h>
using namespace std;

int Mylowbit(int n){
    return n & -n;
}

int main(){
    int num;
    cin >> num;
    while(num){
        int temp = Mylowbit(num);
//        cout << "当前temp值为：" << temp << endl;
        int result = log2(temp);
        printf("第%d位为1\n", result+1);
        num -= temp;
    }
    return 0;
}