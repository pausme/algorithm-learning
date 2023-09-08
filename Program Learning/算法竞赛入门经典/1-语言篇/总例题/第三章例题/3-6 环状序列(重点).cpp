//
// Created by zx208 on 2023/6/7.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--) {
        string s;
        cin >> s;
        int l = s.length();
        vector<string> vec;
        for (int i = 0; i < s.length(); ++i) {
            string s1;
            for (int j = i; j != l + i; ++j) {
                s1 += s[j % l];
            }
            vec.push_back(s1);
        }
        sort(vec.begin(), vec.end());
        cout << vec[0];
    }
    return 0;
}