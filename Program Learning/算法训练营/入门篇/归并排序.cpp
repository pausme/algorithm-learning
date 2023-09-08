//
// Created by zx208 on 2023/7/10.
//
#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int mid, int high){ // 0~mid 和 mid+1~high
    int *b = new int[high - low + 1];
    int i = low, j = mid + 1, k = 0;
    while(i <= mid && j <= high){
        if(a[i] <= a[j]) b[k++] = a[i++];
        else b[k++] = a[j++];
    }
    // 另一个数组有剩余
    while(i <= mid) b[k++] = a[i++];
    while(j <= high) b[k++] = a[j++];
//    memcpy(a, b, high-low+1);
    for (int l = low, tmp = 0; l <= high; ++l) {
        a[l] = b[tmp++];
    }
    delete[] b;
}

void mergesort(int a[], int low, int high){
    if(low < high){
        int mid = (low + high) /2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main(){
    int a[] = {42,15,20,6,8,38,50,12,};
    // 分解
    int left = 0, right = sizeof(a)/ sizeof(int )-1;
    mergesort(a, left , right);
    for(auto i : a) cout << i << " ";
}