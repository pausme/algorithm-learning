//
// Created by zx208 on 2023/6/7.
//
#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;

int fun(int num){
    int temp = 0;
    while(num){
        temp += num % 10;
        num /= 10;
    }
    return temp;
}

int main(){
    int num;
    cin >> num;
    // 直接一步到位 先进行遍历，再得到对应的答案
    for(int i = 1; i <= 100000; i++){
        int temp = 0;
        temp = i + fun(i);
        if(mp.count(temp)){
            if(mp[temp] >= i) mp[temp] = i;
        } else{
            mp[temp] = i;
        }
    }
    while(num--){
        int result;
        cin >> result;
        if(mp.count(result)) cout << mp[result] << endl;
        else cout << 0 << endl;
    }
    return 0;
}