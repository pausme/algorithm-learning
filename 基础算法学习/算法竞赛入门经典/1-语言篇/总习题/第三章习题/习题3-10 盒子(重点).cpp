//
// Created by zx208 on 2023/5/6.
//
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> vec;
// 通过if(pair1.second == pair2.first) pair<int, int> pair3(pair1.first, pair2.second); 来进行类似于矩阵连乘一样的操作，判断是否只剩下一个并且first == second

bool cmp(const pair<int, int> &left, const pair<int, int > &right){
    if(left.first == right.first) return left.second < right.second;
    else return left.first < right.first;
}

int main(){
    int n1, n2;
    while(scanf("%d%d", &n1, &n2) == 2 && n1 && n2){
        pair<int, int> pd(n1, n2);
        vec.push_back(pd);
    }
    sort(vec.begin(), vec.end(), cmp);
    for(auto i : vec){
        for(auto j : vec){
            if(i.second == j.first) pair<int, int> temp(i.first, j.second);
            remove(vec.begin(), vec.end(),i);
            remove(vec.begin(), vec.end(),j);
        }
    }
    return 0;
}