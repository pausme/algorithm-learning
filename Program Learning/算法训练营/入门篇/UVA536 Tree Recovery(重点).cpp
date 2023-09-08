//
// Created by zx208 on 2023/7/22.
//
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=7&page=show_problem&problem=477
//https://www.luogu.com.cn/problem/UVA536
#include <bits/stdc++.h>
using namespace std;
string preorder, midorder;

void pre_mid_CreateBiTree(int pre_index, int mid_index, int len){
    if(len <= 0) return;
    int index = midorder.find(preorder[pre_index]) - mid_index;
    pre_mid_CreateBiTree(pre_index+1, mid_index, index);
    pre_mid_CreateBiTree(pre_index+index+1, mid_index+index+1, len-index-1);
    cout << preorder[pre_index];
}

int main(){
    while(cin >> preorder >> midorder){
        int len = preorder.length();
        pre_mid_CreateBiTree(0, 0, len);
        cout << endl;
    }
    return 0;
}