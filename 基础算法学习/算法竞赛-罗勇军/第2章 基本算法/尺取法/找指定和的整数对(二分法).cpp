//
// Created by zx208 on 2023/7/8.
//
// 类似两数之和
//https://leetcode.cn/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];

int main(){
    int n, index = 0;
    while(scanf("%d", &n)){
        a[index++] = n;
    }
    sort(a, a + index - 2);
    for(int i = 0, j = index-2; i < j;){
        int sum = a[i] + a[j];
        if(sum > a[index-1]) j--;
        else if(sum < a[index-1]) i++;
        else {
            cout << a[i] << " " << a[j] << endl;
            i++;
        }
    }
    return 0;
}
// 21 4 5 6 13 65 32 8 23 28
