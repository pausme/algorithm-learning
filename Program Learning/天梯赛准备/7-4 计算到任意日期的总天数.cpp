//
// Created by zx208 on 2023/7/19.
//
#include <bits/stdc++.h>
using namespace std;

bool isRui(int year){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
    else return false;
}

int main(){
    int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month , day, result = 0;
    cin >> year >> month >> day;
    for (int i = 1; i < year; ++i) {
        isRui(i) ? result += 366 : result += 365;
    }
    cout << result << endl;
    if(isRui(year)) a[1]++;
    for (int i = 0; i < month - 1; ++i) {
        result += a[i];
    }
    cout << result << endl;
    cout << result + day << endl;
    return 0;
}