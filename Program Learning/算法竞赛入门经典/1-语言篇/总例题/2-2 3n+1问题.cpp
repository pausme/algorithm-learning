//
// Created by zx208 on 2023/4/20.
//
/*
 * 对于任意大于1的自然数n，若n为奇数，则将n变为3n＋1，否则变为n的一半。
 * 经过若干次这样的变换，一定会使n变为1。例如，3→10→5→16→8→4→2→1。
 * 输入n，输出变换的次数。n ≤ 1e9。
 * 样例输入：
 * 3
 * 样例输出：
 * 7
 */
#include <iostream>
using namespace std;

int main(){
    // 要使用long long int类型 ,要不然当输入987654321时会输出错误答案
    long long int num, Time = 1;
    cin >> num;
    while(Time++){
        if(num % 2 == 1) num = 3*num + 1;
        else num /= 2;
        if(num == 1) break;
    }
    cout << Time - 1;
    return 0;
}