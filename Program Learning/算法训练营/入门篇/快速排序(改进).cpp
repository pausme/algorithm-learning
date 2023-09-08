//
// Created by zx208 on 2023/7/11.
//
#include <bits/stdc++.h>
using namespace std;

int findPivot(int a[], int left, int right){
    int i = left, j = right, temp = a[left];
    while(i < j){
        while(i < j && a[j] > temp) j--;
        while(i < j && a[i] <= temp) i++;
        if(i < j) swap(a[i++], a[j--]); // 只进行一次元素交换
    }
    if(a[i] > temp){
        swap(a[i-1], a[left]);
        return left-1;
    }
    swap(a[i], a[left]);
    return i;
}

void Qsort(int a[], int left, int right){
    if(left < right){
        int pivot = findPivot(a, left, right);
        Qsort(a, left, pivot-1);
        Qsort(a, pivot+1, right);
    }
}

int main(){
    int a[] = {42,15,20,6,8,38,50,12,};
    Qsort(a, 0, sizeof(a)/ sizeof(int )-1);
    for (auto i : a) cout << i << " ";
    return 0;
}