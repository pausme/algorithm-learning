//
// Created by zx208 on 2023/4/23.
//
/*
 * 格式化输出（printf）的特殊用法。
 * 如printf(“% * . * lf\n”, 8, 4, (double)1/6); 会输出8个字宽保留4位小数的浮点数运算结果。
 * */
#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main(){
    int number = 1;
    while(scanf("%d%d%d", &a, &b, &c) == 3 && (a || b || c)){
        if(b == 0) cout << "inf" << endl;
        double result = 1.0 * a / b;
        printf("Case %d: %.*lf\n",number++, c, result);
    }
    return 0;
}