//
// Created by zx208 on 2023/7/5.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, m;
pair<string, int> a[N];
// n <= 10^5，0 <= m <= 10^9，0 <= t <= 10^9

int calc(int i, int bit){
    for (int j = 1; j <= n; ++j) {
        int x = a[j].second >> i & 1; // 得到第i位的二进制数
        if(a[j].first == "AND") bit &= x;
        else if(a[j].first == "OR") bit |= x;
        else bit ^= x;
    }
    return bit;
}

int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; ++i){
        string str;
        int temp;
        cin >> str >> temp;
        a[i] = make_pair(str, temp);
    }
    int val = 0, ans = 0;
    // 初始攻击值的某一位填1有两个条件：
    // 1.填1时使初始攻击值不超过m的最大表示范围
    // 2.填1时，通过 n 次位运算结果为1，填0时，则通过 n 次位运算结果为0
    // 要不然填1干啥，直接填0多省
    for (int i = 29; i >= 0; --i) { // 因为m是在1 ~ 1e9之间，很明显只有30位能用，因为int最大表示范围在21亿(1e31)左右，因为有一位符号位
        int temp1 = calc(i, 0);
        int temp2 = calc(i, 1);
        if(val + (1 << i) <= m && temp1 < temp2){
            val += 1 << i;
            ans += temp2 << i;
        } else ans += temp1 << i;
    }
    cout << ans << endl;
    return 0;
}