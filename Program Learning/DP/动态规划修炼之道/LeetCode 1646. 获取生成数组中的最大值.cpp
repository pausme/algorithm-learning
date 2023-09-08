//
// Created by zx208 on 2023/6/1.
//
// https://leetcode.cn/problems/get-maximum-in-generated-array/
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int nums[N];

int main(){
    int n, dMax = 0;
    cin >> n;
    memset(nums, 0, sizeof nums);
    nums[0] = 0, nums[1] = 1;
    for (int i = 2; i <= n; ++i) {
        if(i % 2){
            nums[i] = nums[(i-1)/2] + nums[(i+1)/2];
            dMax = max(nums[i], dMax);
        } else{
            nums[i] = nums[i/2];
            dMax = max(nums[i], dMax);
        }
    }
    cout << dMax;
    return 0;
}