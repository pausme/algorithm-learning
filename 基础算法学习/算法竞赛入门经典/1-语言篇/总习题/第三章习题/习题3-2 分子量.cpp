//
// Created by zx208 on 2023/5/6.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    double weights[] = {12.01, 1.008, 16.00, 14.01};
    // 先判断字母，然后再判断数字
    string str;
    map<char, int> mp;
    getline(cin, str);
    for (int i = 0; i < str.length(); ++i) {
        if(str[i] < '0' || str[i] > '9'){
            int temp = 0, index = i;
            i++;
            while(i < str.length() && str[i] > '0' && str[i] < '9'){
                temp = (str[i] - '0') + temp * 10;
                i++;
            }
            temp == 0 ? mp[str[index]]++: mp[str[index]] += temp;
            i--;
        }
    }
    double result = mp['C'] * weights[0] + mp['H'] * weights[1] + mp['O'] * weights[2] + mp['N'] * weights[3];
    cout << result;
    return 0;
}