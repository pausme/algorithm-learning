//
// Created by zx208 on 2023/5/9.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, times = 7;
    while(scanf("%d", &num) && num != -1){
        string target, test;
        cin >> target >> test;
        map<char, int> mp;

        // 统计目标串中所含有的字母集合
        for (char i : target) {
            if(mp.count(i)){
                mp[i]++;
            } else{
                mp[i] = 1;
            };
        }

        // 统计测试串中的结果
        for(char i : test){
            if(mp.count(i)){
                mp.erase(i);
            } else{
                times--;
            }
        }

        // 判断结果
        cout << "Round " << num << endl;
        if(!mp.empty() && times > 0){
            cout << "You chickened out." << endl;
        } else if(mp.empty() && times > 0){
            cout << "You win." << endl;
        } else cout << "You lose." << endl;
    }
    return 0;
}