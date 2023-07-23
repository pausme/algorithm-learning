//
// Created by zx208 on 2023/7/22.
//
#include <bits/stdc++.h>
using namespace std;

struct BiTree{
    char data{0};
    BiTree *rchild{}, *lchild{};
};

// 先序和中序建立二叉树
BiTree* pre_mid_createBiTree(char *pre, char *mid, int len){
    if(len == 0) return nullptr; // 说明已经到达叶子结点
    // 先找到先序的第一个节点（即根节点）在中序的位置
    int index = 0;
    char ch = pre[0];
    while(ch != mid[index]) index++;
    BiTree *T = new BiTree;
    T->data = ch;
    T->lchild = pre_mid_createBiTree(pre+1, mid, index);
    T->rchild = pre_mid_createBiTree(pre+index+1, mid+index+1, len-index-1);
    return T;
}

// 中序和后序建立二叉树
BiTree* mid_pro_createBiTree(char *mid, char *last, int len){
    if(len == 0) return nullptr;
    int index = 0;
    char ch = last[len-1];
    while(ch != mid[index]) index++;
    BiTree *T = new BiTree;
    T->data = ch;
    T->lchild = mid_pro_createBiTree(mid, last, index);
    T->rchild = mid_pro_createBiTree(mid+index+1, last+index, len-index-1);
    return T;
}

void PreOrder(BiTree *T){
    if(T){
        cout << T->data << endl;
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}

int main(){
    BiTree *root;
    char pre[] = "ABDECFG", mid[] = "DBEAFGC", last[] = "DEBGFCA";
//    root = pre_mid_createBiTree(pre, mid, strlen(pre));
    root = mid_pro_createBiTree(mid, last, strlen(last));
    PreOrder(root);
    return 0;
}