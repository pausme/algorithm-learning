//
// Created by zx208 on 2023/4/23.
//
#include <bits/stdc++.h>
using namespace std;
long long int n, m;
int number = 1;

int main(){
    while(scanf("%d%d", &n, &m) == 2){
        double sum = 0;
        if(n == 0 && m == 0) break;
        for(long long int i = n; i <= m; i++){
            if(i == 0) continue;
            else {
                sum += 1.0/ i / i;
            }
        }
        printf("Case %d: %.5lf\n",number++, sum);
    }
    return 0;
}