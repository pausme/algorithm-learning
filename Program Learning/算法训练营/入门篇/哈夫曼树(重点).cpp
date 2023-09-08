#include <bits/stdc++.h>
using namespace std;

#define MAXBIT 100
#define MAXVALUE 10000
#define MAXLEAF 30
#define MAXNODE MAXLEAF*2-1

typedef struct {
    double weight;
    int parent;
    int lchild;
    int rchild;
    char value;
} HNodeType;

typedef struct {
    int bit[MAXBIT];
    int start;
} HCodeType;

HNodeType HuffNode[MAXNODE];
HCodeType HuffCode[MAXLEAF];

/*构造哈夫曼树*/
void HuffmanTree(HNodeType *HuffNode, int n)
{
    double m1, m2;
    int x1, x2;
    int i, j;

    /*初始化哈夫曼数组中的节点*/
    for(i=0; i<2*n-1; i++)
    {
        HuffNode[i].weight = 0.0;
        HuffNode[i].parent = -1;
        HuffNode[i].lchild = -1;
        HuffNode[i].rchild = -1;
    }

    /*输入n个子节点的权值*/
    for(i=0; i<n; i++)
    {
        cout << "Please input value and weight of leaf node " << i+1 << endl;
        cin >> HuffNode[i].value >> HuffNode[i].weight;
    }

    /*构造哈夫曼树*/
    for(i=0; i<n-1; i++)
    {
        m1 = m2 = MAXVALUE;
        x1 = x2 = 0;

        /*找出所有节点中权值最小, 无父节点的两个节点, 合并为一颗二叉树*/
        for(j=0; j<n+i; j++)
        {
            if(HuffNode[j].weight < m1 && HuffNode[j].parent == -1)
            {
                m2 = m1;
                x2 = x1;
                m1 = HuffNode[j].weight;
                x1 = j;
            }
            else if(HuffNode[j].weight < m2 && HuffNode[j].parent == -1)
            {
                m2 = HuffNode[j].weight;
                x2 = j;
            }
        }

        /*设置找到的两个子节点的父节点信息*/
        HuffNode[x1].parent = n+i;
        HuffNode[x2].parent = n+i;
        HuffNode[n+i].weight = m1 + m2;
        HuffNode[n+i].lchild = x1;
        HuffNode[n+i].rchild = x2;
    }
}

/*哈夫曼编码*/
void HuffmanCode(HCodeType *HuffCode, int n)
{
    HCodeType cd;
    int i, j, c, p;

    for(i=0; i<n; i++)
    {
        cd.start = n - 1;
        c = i;
        p = HuffNode[c].parent;

        while(p != -1)
        {
            if(HuffNode[p].lchild == c)
            {
                cd.bit[cd.start] = 0;
            }
            else
            {
                cd.bit[cd.start] = 1;
            }

            cd.start--;

            c = p;

            p = HuffNode[c].parent;
        }

        for(j=cd.start+1; j<n; j++)
        {
            HuffCode[i].bit[j] = cd.bit[j];
        }

        HuffCode[i].start = cd.start;
    }
}

int main()
{
    int n, i, j;

    cout << "Please input n: " << endl;
    cin >> n;

    HuffmanTree(HuffNode, n);
    HuffmanCode(HuffCode, n);

    for(i=0; i<n; i++)
    {
        cout << HuffNode[i].value << ": Huffman code is: ";
        for(j=HuffCode[i].start+1; j<n; j++)
            cout << HuffCode[i].bit[j];
        cout << endl;
    }

    return 0;
}