//
// Created by zx208 on 2023/5/9.
//
#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
vector<string> vec;


string change(const string& str){
    string ans = str;
//    这里发现使用增强for循环大写转小写时没有转换成功，
//    原因就是局部变量使用完就释放了，所以要使用引用来改变原来的元素值。
//    for(auto i : ans){
//        i = tolower(i);
//    }
    for(char & an : ans){
        an = tolower(an);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    string str;
    while(cin >> str){
        if(str[0] == '#') break;
        vec.push_back(str);
        string buf = change(str);
        if(!mp.count(buf)) mp[buf] = 0;
        mp[buf]++;
    }
    vector<string> ans;

    for(const auto& i : vec){
        if(mp[change(i)] == 1) ans.push_back(i);
    }

    sort(ans.begin(), ans.end());

    for(const auto& i : ans){
        cout << i << endl;
    }
    return 0;
}