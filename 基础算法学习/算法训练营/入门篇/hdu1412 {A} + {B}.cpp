//
// Created by zx208 on 2023/7/17.
//
//https://acm.hdu.edu.cn/showproblem.php?pid=1412
#include <cstdio>
#include <set>
using namespace std;

int main(){
    int n1, n2;
    while(scanf("%d%d", &n1, &n2) == 2){
        set<int> s;
        int temp = n1 + n2;
        while(temp--){
            int a;
            scanf("%d", &a);
            s.insert(a);
        }
        for(auto i : s) printf("%d ", i);
        printf("\n");
    }
}