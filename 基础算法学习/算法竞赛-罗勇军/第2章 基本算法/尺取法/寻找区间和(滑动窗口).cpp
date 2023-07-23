//
// Created by zx208 on 2023/7/8.
//
// 给定一个长度为num的数组和一个数target,在该数组中寻找一个区间，使这个区间的数组元素之和等于target.
// 输出区间的起点和终点
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];

int main(){
    int num, target, sum = 0;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> a[i];
    }
    cin >> target;
    for(int i = 0, j = 0; j < num;){
        sum += a[i];
        while(j < num) {
            if (sum >= target) {
                if (sum == target) cout << i << " " << j << endl;
                sum -= a[i];
                i++;
                if (i > j) {
                    sum = a[i];
                    j++;
                }
            }
            if (sum < target) {
                j++;
                sum += a[j];
            }
        }
    }
    return 0;
}
//15
//6 1 2 3 4 6 4 2 8 9 10 11 12 13 14
//6