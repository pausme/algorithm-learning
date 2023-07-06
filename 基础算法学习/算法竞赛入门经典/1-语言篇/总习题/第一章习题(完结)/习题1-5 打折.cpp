//
// Created by zx208 on 2023/5/7.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    if(num * 95 >= 300) printf("%.2f", num*95*0.85);
    else printf("%.2f",num * 95 * 1.0);
    return 0;
}