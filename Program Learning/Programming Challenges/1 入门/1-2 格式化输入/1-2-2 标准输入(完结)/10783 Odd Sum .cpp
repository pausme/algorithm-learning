//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases = 0, num;
    cin >> num;
    while(num--){
        int n1, n2, result = 0;
        cin >> n1 >> n2;
        if(n1 % 2 == 0){
            for(int i = n1 + 1; i <= n2; i += 2){
                result += i;
            }
        } else{
            for(int i = n1; i <= n2; i += 2){
                result += i;
            }
        }
        cout << "Case " << ++cases <<": " << result << "\n";
    }
    return 0;
}