//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    while(getline(cin, str), str.length() != 0) {
        int p_l = 0;
        for (auto i: str) {
            if (i == 'B' || i == 'F' || i == 'P' || i == 'V'){
                if(p_l != 1){
                    p_l = 1;
                    cout << 1;
                }
            }else if (i == 'C' || i == 'G' || i == 'J' || i == 'K' || i == 'Q' || i == 'S' || i == 'X' || i == 'Z'){
                if(p_l != 2){
                    p_l = 2;
                    cout << 2;
                }
            }else if(i == 'D' || i == 'T'){
                if(p_l != 3){
                    p_l = 3;
                    cout << 3;
                }
            }else if(i == 'L'){
                if(p_l != 4){
                    p_l = 4;
                    cout << 4;
                }
            } else if(i == 'M' || i == 'N'){
                if(p_l != 5){
                    p_l = 5;
                    cout << 5;
                }
            }else if(i == 'R'){
                if(p_l != 6){
                    p_l = 6;
                    cout << 6;
                }
            }else {
                p_l = 0;
                continue;
            }
        }
        cout << '\n';
    }
    return 0;
}