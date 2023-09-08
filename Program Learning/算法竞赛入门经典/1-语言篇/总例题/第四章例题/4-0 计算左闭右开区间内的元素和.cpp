//
// Created by zx208 on 2023/5/8.
//
#include <bits/stdc++.h>
using namespace std;

int sum1(int *begin, int *end){
    int result = 0;
    int n = end - begin;
    for (int i = 0; i < n; ++i) {
        result += begin[i];
    }
    return result;
}

int sum2(int *begin, int *end){
    int result = 0;
    for (int *p = begin; p != end ; ++p) {
        result += *p;
    }
    return result;
}

int main(){
    int num[] = {1,2,3,4,5,6};
    cout << sum1(num, num + 6);
    cout << sum2(num, num + 6);
}