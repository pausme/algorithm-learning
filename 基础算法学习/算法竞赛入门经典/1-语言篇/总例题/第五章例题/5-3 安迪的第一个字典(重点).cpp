//
// Created by zx208 on 2023/5/9.
//
#include <bits/stdc++.h>
using namespace std;

set<string> dict;
int main() {
    string s, buf;
    while(cin >> s) { // 因为无法保证输入的文本是否是含有多个空格，所以我们分别处理每一个字符串
        for(char & i : s)
            if(isalpha(i)) i = tolower(i);
            else i = ' ';
        // ？ 为什么这里要使用stringstream来进行判断字符串呢
        stringstream ss(s);
        while(ss >> buf) dict.insert(buf);
    }
    for(const auto & it : dict)
        cout << it << "\n";
    return 0;
}