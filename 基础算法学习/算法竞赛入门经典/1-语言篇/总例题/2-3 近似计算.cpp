//
// Created by zx208 on 2023/4/20.
//
/*
 * 计算Π/4 = 1 - 1/3 + 1/5 - 1/7 + ...,直到最后一项小于10-6
 */
#include <iostream>
using namespace std;

int main(){
    double num = 1, sum = 0;
    for(int i = 1 ; 1 / num >= 1e-6; num += 2 , i = -i){
        sum = sum + (1 / num*i);
    }
    printf("%.6f",sum);
    return 0;
}
/*
 * #include<stdio.h>
 * int main() {
 * double sum = 0;
 * for(int i = 0; ; i++) {
 *     double term = 1.0 / (i*2+1);
 *     if(i % 2 == 0) sum += term;
 *     else sum -= term;
 *     if(term < 1e-6) break;
 * }
 * printf("%.6f\n", sum);
 * return 0;
}*/
