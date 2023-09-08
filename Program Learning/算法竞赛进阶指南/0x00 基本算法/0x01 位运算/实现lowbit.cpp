//
// Created by zx208 on 2023/7/6.
//
#include <bits/stdc++.h>
using namespace std;
// lowbit(n)
// 定义为非负整数n 在二进制表示下"最低位的1 及其后边所有的0"构成的数值
int Mylowbit(int n){ // 想想为什么可以这样实现呢
//    先把n 取反，此时第K 位变为O, 第O ~ k- 1 位都是1
//    再令n=n+l, 此时因为进位，第K 位变为1 ，第O ~ k - 1 位都是0
//    而在补码表示下，~n= -1-n，所以lowbit(n) = n & (-n)
    return n & -n;
}

int main(){
    int n;
    cin >> n;
    n = Mylowbit(n);
    cout << n;
    return 0;
}