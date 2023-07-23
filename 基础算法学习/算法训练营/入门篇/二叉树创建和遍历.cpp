//
// Created by zx208 on 2023/7/20.
//
#include <bits/stdc++.h>
using namespace std;

struct BiTree{
    char data{0};
    BiTree *rchild{}, *lchild{};
};

void CreateBiTree(BiTree * &T){
    char ch;
    ch = getchar();
    if(ch == '#') T = nullptr;
    else{
        T = new BiTree;
        T->data = ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
}

void PreOrder(BiTree *T){
    if(T){
        cout << T->data << endl;
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}

void InOrder(BiTree *T){
    if(T){
        cout << T->data << endl;
        InOrder(T->lchild);
        InOrder(T->rchild);
    }
}

void PostOrder(BiTree *T){
    if(T){
        cout << T->data << endl;
        PostOrder(T->lchild);
        PostOrder(T->rchild);
    }
}

void LevelTraverse(BiTree *T){
    BiTree *p;
    if(T){
        queue<BiTree*> q;
        q.push(T);
        while(!q.empty()){
            p = q.front();
            q.pop();
            cout << p->data << " ";
            if(p->lchild) q.push(p->lchild);
            if(p->rchild) q.push(p->rchild);
        }
    }
}

int main(){
    BiTree *root;
    CreateBiTree(root);
//    PreOrder(root);
    LevelTraverse(root);
    return 0;
}

// ABD##E##CF#G###