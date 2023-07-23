//
// Created by zx208 on 2023/7/8.
//
// 给定一个长度为num的数组，把数组中重复的数去掉
// 类似于力扣  删除有序数组中的重复项/移除元素
//https://leetcode.cn/problems/remove-element/
//https://leetcode.cn/problems/remove-duplicates-from-sorted-array/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];

int main(){
    int num, slow = 1;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> a[i];
    }
    sort(a, a + num);
    for(int fast = 1; fast < num; fast++){
        if(a[fast] != a[fast-1]) {
            a[slow] = a[fast];
            slow++;
        }
    }
    for(int i = 0; i < slow; i++){
        cout << a[i] << " ";
    }
    return 0;
}