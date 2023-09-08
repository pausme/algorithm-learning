//
// Created by zx208 on 2023/8/30.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    while(cin >> str){
        char vowel = tolower(str[0]);
        if(str[str.length()-1] == '.'){
            if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u'){
                str = str.substr(0, str.length()-1);
                str.push_back('a');
                str.push_back('y');
                str.push_back('.');
            }else{
                str = str.substr(1, str.length()-2) + str[0] + "ay.";
            }
        }
        if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u'){
            str.push_back('a');
            str.push_back('y');
        }else{
            str = str.substr(1, str.length()-1) + str[0] + "ay";
        }
        cout << str << " ";
    }
    return 0;
}