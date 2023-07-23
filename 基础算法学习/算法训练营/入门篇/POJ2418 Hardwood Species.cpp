//
// Created by zx208 on 2023/7/19.
//
//http://poj.org/problem?id=2418
#include <cstdio>
#include <iostream>
#include <string>
#include <map>
using namespace std;
map<string, int> mp;

int main(){
    string s;
    int nums = 0;
    while(getline(cin, s)){
        nums++;
        mp[s]++;
    }
    for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " ";
        printf("%.4f\n", 100.0*(it->second) / nums);
    }
    return 0;
}