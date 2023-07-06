//
// Created by zx208 on 2023/4/20.
//
/*
 * 已知鸡和兔的总数量为n，总腿数为m。
 * 输入n和m，依次输出鸡的数目和兔的数目。
 * 如果无解，则输出No answer。
 * 样例输入：
 * 14 32
 * 样例输出：
 * 12 2
 * 样例输入：
 * 10 16
 * 样例输出：
 * No answer
 * */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(4*n < m || 2*n > m || m % 2 == 1){
        // 全为鸡大于m 或 全为兔小于m 或 腿数为奇数
        cout << "No answer" << endl;
    } else{
        // 4(n-x) + 2x = m --> 4n - 2x = m --> x = (4n - m)/2 鸡的数量
        // 4x + 2(n-x) = m --> 2n+2x = m --> x = (m-2n)/2 兔的数量
        cout << (4*n - m)/2 << " " << (m - 2*n)/2 << endl;
    }
    return 0;
}