//
// Created by zx208 on 2023/4/21.
//

#include <bits/stdc++.h>
using namespace std;

int num, sum = 1;

void jiecheng(int k){
    if(k == num + 1){
        return;
    }
    sum *= k;
    jiecheng(k+1);
}

int main(){
    cin >> num;
    jiecheng(1);
    cout << sum;
    return 0;
}