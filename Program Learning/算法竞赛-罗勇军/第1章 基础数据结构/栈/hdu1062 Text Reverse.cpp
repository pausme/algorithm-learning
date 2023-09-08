//
// Created by zx208 on 2023/7/7.
//
//https://acm.hdu.edu.cn/showproblem.php?pid=1062
#include <iostream>
#include <stack>
using namespace std;

int main(){
    int T;
    cin >> T;
    getchar();
    while(T--){
        stack<char> s;
        while(true){
            char ch = getchar();
            if(ch == ' ' || ch == '\n' || ch == EOF){
                while(!s.empty()){
                    printf("%c", s.top());
                    s.pop();
                }
                if(ch == '\n' || ch == EOF) break;
                printf(" ");
            } else s.push(ch);
        }
        printf("\n");
    }
    return 0;
}