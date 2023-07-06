//
// Created by zx208 on 2023/5/8.
//
#include <bits/stdc++.h>
using namespace std;
const int n = 1e4 + 10;
int a[n];

int main(){
    int N, Q, times = 1;
    while(scanf("%d%d", &N, &Q) == 2 && N){
        cout << "CASE #" << times++;
        for (int i = 0; i < N; ++i) {
            cin >> a[i];
        }
        sort(a, a+N);
        while(Q--){
            int temp;
            cin >> temp;
            // lower_bound的作用是查找“大于或者等于x的第一个位置，若没有找到则返回a.end()
            int result = lower_bound(a, a+N, temp) - a;
            if(a[result] == temp) printf("%d found at %d\n", temp, result+1);
            else printf("%d not found\n", temp);
        }
    }
    return 0;
}