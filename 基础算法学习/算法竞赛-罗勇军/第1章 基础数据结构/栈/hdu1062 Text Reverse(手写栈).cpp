//
// Created by zx208 on 2023/7/7.
//
//https://acm.hdu.edu.cn/showproblem.php?pid=1062
#include <iostream>
using namespace std;

const int N = 1e5 + 10;

struct Mystack{
    char a[N];
    int t = 0;

    void push(char x){
        a[++t] = x;
    }

    char top(){
        return a[t];
    }
    void pop(){
        t--;
    }
    int empty(){
        return t == 0 ? 1 : 0;
    }
}st;

int main(){
    int n;
    cin >> n;
    getchar();
    Mystack mystack;
    while(n--){
        while(true){
            char ch = getchar();
            if(ch == ' ' || ch == '\n' || ch == EOF){
                while(!mystack.empty()){
                    printf("%c", mystack.top());
                    mystack.pop();
                }
                if(ch == '\n' || ch == EOF) break;
                printf(" ");
            } else mystack.push(ch);
        }
        printf("\n");
    }
    return 0;
}