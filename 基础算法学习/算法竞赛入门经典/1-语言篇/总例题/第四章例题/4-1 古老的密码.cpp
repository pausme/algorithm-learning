//
// Created by zx208 on 2023/5/8.
//
/*
 * 给定两个长度相同且不超过100的字符串，判断是否能把其中一个字符串的各个字母重排，然后对26个字母做一个一一映射，使得两个字符串相同。
 * 例如，JWPUDJSTVP重排后可以得到WJDUPSJPVT，然后把每个字母映射到它前一个字母（B->A, C->B, …, Z->Y, A->Z），
 * 得到VICTORIOUS。输入两个字符串，输出YES或者NO。
*/
// 解题思路：我们可以不需要对源字符串来进行排序，而是直接统计各字母出现的次数，然后排序来比较是否相同。
// 因为字母可以通过重排和一一映射来变得相同
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    int a[30] = {0}, b[30] = {0};
    getline(cin, str1);
    getline(cin, str2);
    for (auto i : str1) {
        a[i-'A']++;
    }
    for (auto i : str2) {
        b[i-'A']++;
    }
    sort(a, a + 26);
    sort(b, b + 26);
    for (int i = 0; i < 26; ++i) {
        if(a[i] != b[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}