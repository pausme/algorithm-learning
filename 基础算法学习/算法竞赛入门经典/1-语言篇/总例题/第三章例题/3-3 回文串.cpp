//
// Created by zx208 on 2023/6/7.
//
#include <bits/stdc++.h>
using namespace std;
// 存储各个字母的镜像可以通过常量数组，也可以通过map来进行存储 很明显我们这里使用常量数组
char result[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
int main(){
    string str;
    while(getline(cin, str)){ // 思考一下为什么这里不能使用 scanf 来输入字符串
        bool flag1 = true, flag2 = true;
        int l = str.length();
        for(int i = 0; i < (l+l%2)/2; i++){
            if(str[i] != str[l-i-1]){
                flag1 = false;
            }
            if(isalpha(str[i])){
                if(str[l-i-1] != result[str[i] - 'A']) flag2 = false;
            } else{
                if(str[l-i-1] != result[str[i] - '0' + 25]) flag2 = false;
            }
            if(!(flag2 || flag1)) break;
        }
        if(flag1) cout << "是回文串 ";
        else cout << "不是回文串 ";
        if(flag2) cout << "是镜像串" << endl;
        else cout << "不是镜像串" << endl;
    }

    return 0;
}