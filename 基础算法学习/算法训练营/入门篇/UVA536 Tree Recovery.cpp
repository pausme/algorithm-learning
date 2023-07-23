//
// Created by zx208 on 2023/7/22.
//
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=7&page=show_problem&problem=477
//https://www.luogu.com.cn/problem/UVA536
#include <bits/stdc++.h>
using namespace std;

struct BiTree{
    char data;
    BiTree *lchild, *rchild;
};

BiTree* pre_mid_CreateBiTree(string pre, string mid, int len){
    if(len == 0) return nullptr;
    int index = 0;
    while(pre[0] != mid[index]) index++; // 根节点在中序序列中位置
    BiTree *T;
    T->data = pre[0];
    T->lchild = pre_mid_CreateBiTree(pre.substr(1,pre.length()-1), mid.substr(0,mid.length()-index), index);
    T->rchild = pre_mid_CreateBiTree(pre.substr(index+1, pre.length()-index-1), mid.substr(index, mid.length()-index-1), pre.length()-index-1);
    return T;
}

void PostOrder(BiTree *p){
    if(p){
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        cout << p->data;
    }
}

int main(){
    string preorder, midorder;
    while(cin >> preorder >> midorder){
        BiTree *root;
        root = pre_mid_CreateBiTree(preorder, midorder, preorder.length());
        PostOrder(root);
    }
    return 0;
}