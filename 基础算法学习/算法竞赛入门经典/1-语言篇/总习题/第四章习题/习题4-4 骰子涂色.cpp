//
// Created by zx208 on 2023/5/8.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    set<set<char> > vec1;
    set<set<char> > vec2;
    string raw, result;
    cin >> raw >> result;
    // raw的1-6 只要对应result的（1-6，2-5，3-4）中随便一个就行
    //只需要判断 raw骰子1-6 有没有在 result 骰子（1-6，2-5，3-4）之间出现过
    //然后去除掉对应出现过的组合，然后按照以上步骤进行判断2-5和3-4即可

    set<char> s1;
    s1.insert(raw[0]);
    s1.insert(raw[5]);
    vec1.insert(s1);
    set<char> s2;
    s2.insert(raw[1]);
    s2.insert(raw[4]);
    vec1.insert(s2);
    set<char> s3;
    s3.insert(raw[2]);
    s3.insert(raw[3]);
    vec1.insert(s3);

    set<char> s4;
    s4.insert(result[0]);
    s4.insert(result[5]);
    vec2.insert(s4);
    set<char> s5;
    s5.insert(result[1]);
    s5.insert(result[4]);
    vec2.insert(s5);
    set<char> s6;
    s6.insert(result[2]);
    s6.insert(result[3]);
    vec2.insert(s6);

    if(vec1 == vec2) cout << "Yes";
    else cout << "No";
    return 0;
}