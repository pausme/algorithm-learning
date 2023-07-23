//
// Created by zx208 on 2023/7/19.
//
//https://acm.hdu.edu.cn/showproblem.php?pid=1263
#include <iostream>
#include <map>
#include <cstdio>
#include <string>
using namespace std;
map<string, map<string, int> > mp;

int main(){
    int num;
    cin >> num;
    while(num--){
        mp.clear();
        int nums;
        cin >> nums;
        while(nums--){
            string kind, prodution_area;
            int fruit_num;
            cin >> kind >> prodution_area >> fruit_num;
            mp[prodution_area][kind] += fruit_num;
        }

        for(map<string, map<string, int> >::iterator it = mp.begin(); it != mp.end(); it++){
            cout << it->first << endl;
            for(map<string, int>::iterator item = it->second.begin(); item != it->second.end(); item++){
                cout << "   |----" << item->first << "(" << item->second << ")" << endl;
            }
        }
    }
    return 0;
}