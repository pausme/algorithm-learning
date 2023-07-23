//
// Created by zx208 on 2023/7/20.
//
//http://poj.org/problem?id=2388
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5;
int a[N];

int main(){
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> a[i];
    }

    sort(a, a+num);
    cout << a[num/2];
    return 0;
}