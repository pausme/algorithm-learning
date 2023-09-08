//
// Created by zx208 on 2023/4/20.
//
/*
 * 输入n，计算S＝1！＋2！＋3！＋…＋n！的末6位（不含前导0）。n≤1e6，n！表示
 * 前n个正整数之积。
 * 样例输入：
 * 10
 * 样例输出：
 * 37913
 */
//提示：
//要计算只包含加法、减法和乘法的整数表达式除以正整数n的余数，可以在
//每步计算之后对n取余，结果不变。
#include <iostream>
using namespace std;

int main(){
    int num, sum = 0;
    cin >> num;
    for(int i = 1; i <= num; i++){
        int temp = 1;
        for (int j = 1; j <= i; ++j) {
            temp *= j;
            temp = temp % 1000000;
        }
        sum += temp;
    }
    cout << sum % 1000000;
    return 0;
}

/*
 * #include<stdio.h>
#include<time.h>
int main()
{
const int MOD = 1000000;
int n, S = 0;
scanf("%d", &n);
for(int i = 1; i <= n; i++){
    int factorial = 1;
    for(int j = 1; j <= i; j++)
        factorial = (factorial * j % MOD);
    S = (S + factorial) % MOD;
}
printf("%d\n", S);
printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);
return 0;
}*/
