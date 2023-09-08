//
// Created by zx208 on 2023/7/20.
//
//http://poj.org/problem?id=1256
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(char a, char b){
    if(islower(a) || islower(b)){
        if(tolower(a) == tolower(b)) return a < b;
        else return tolower(a) < tolower(b);
    } else return  a < b;
}

int main(){
    int num;
    cin >> num;
    while(num--){
        string s;
        cin >> s;
        sort(s.begin(), s.end(), cmp);
        do{
            cout << s << endl;
        }while(next_permutation(s.begin(), s.end(), cmp));
    }
    return 0;
}