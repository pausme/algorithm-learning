//
// Created by zx208 on 2023/5/8.
//
#include <bits/stdc++.h>
using namespace std;
int nums[8][1<<8];

int change(const string& s){
    int temp = s.length(), result = 0;
    while(temp--){
        if(s[temp] == '1') result += pow(2, s.length() - temp-1);
        else result += 0;
    }
    return result;
}

int main(){
    memset(nums, 0, sizeof nums);
    string head;
    cin >> head;
    int temp = 0;
    // 实现字符串的存储
    for(int i = 1; i < 8; i++){
        for (int j = 0; j < pow(2,i)-1; ++j) {
            nums[i][j] = head[temp++];
            if(temp >= head.length()) break;
        }
        if(temp >= head.length()) break;
    }
    // 实现解码功能
    string text;
    cin >> text;
    int index_ = 0, l = 0;
    while(index_ < text.length() && change(text.substr(index_, 3)) != 0){
        index_ += l;
        l = change(text.substr(index_, 3));
        index_ += 3;
        while(index_ < text.length() && change(text.substr(index_, l)) != pow(2,l)-1){
            int chr = change(text.substr(index_, l));
            index_ += l;
            printf("%c",nums[l][chr]);
        }
    }
    return 0;
}