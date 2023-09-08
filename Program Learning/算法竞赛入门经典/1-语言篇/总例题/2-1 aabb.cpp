//
// Created by zx208 on 2023/4/20.
//
/*
 * 输出所有形如aabb的4位完全平方数（即前两位数字相等，后两位数字也相等）。
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int temp = 0;
    for(int i = 1 ; i <= 9 ; i++){
        for (int j = 0; j <= 9; ++j) {
            temp = i *1100 + j * 11;
            if((int)sqrt(temp) * (int) sqrt(temp) == temp){
                cout << temp << " ";
            }
        }
    }
    return 0;
}