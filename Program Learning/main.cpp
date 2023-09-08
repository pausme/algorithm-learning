//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int S, cases = 0;
    while(cin >> S, S >= 0){
        cout << "Case " << ++cases << ":\n";
        int create[12], sum = S;
        for (int i = 0; i < 12; ++i) {
            cin >> create[i];
        }
        for (int i = 0; i < 12; ++i) {
            int need;
            cin >> need;
            if(sum >= need) {
                sum -= need;
                cout << "No problem! :D" << '\n';
            }else{
                cout << "No problem. :(" <<'\n';
            }
            sum += create[i];
        }
    }
    return 0;
}