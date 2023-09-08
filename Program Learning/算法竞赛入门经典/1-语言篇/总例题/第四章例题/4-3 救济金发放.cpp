//
// Created by zx208 on 2023/4/23.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 30;
int n, k ,m, nums[N];

int go(int start, int diretion, int step){ // 想清楚为什么要通过判断nums[start] == 0 来作为终止条件 并且 start的值为什么要后退一位
    while(step--){
        do{
            start = (start + diretion + n - 1) % n + 1;
        } while(nums[start] == 0);
    }
    return start;
}

int main(){
    while(scanf("%d%d%d", &n ,&k, &m) == 3 && n){
        // 初始化圈
        for (int i = 1; i <= n; ++i) {
            nums[i] = i;
        }

        int left = n;
        int A_s = n, B_s = 1;
        while(left){
            A_s = go(A_s, 1, k);
            B_s = go(B_s, -1, m);
            printf("%3d", A_s);
            left--;
            if(A_s != B_s){
                printf("%3d", B_s);
                left--;
            }
            nums[A_s] = nums[B_s] = 0;
            if(left) cout << ',';
        }
        cout << endl;
    }
    return 0;
}