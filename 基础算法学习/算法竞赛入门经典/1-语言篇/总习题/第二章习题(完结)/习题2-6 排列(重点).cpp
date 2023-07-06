//
// Created by zx208 on 2023/4/23.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    for (int i = 123; 3 * i <= 987; ++i) {
        string str;
        char buf[10];
        set<char> s;
        sprintf(buf,"%d%d%d",i, 2*i, 3*i);
        str = buf;
        if(str.find('0') <= str.length()) continue;
        for(auto a : str){
            s.insert(a);
        }
        if(s.size() == 9) cout << i << " " << 2*i << " " << 3*i << endl;
    }
    return 0;
}