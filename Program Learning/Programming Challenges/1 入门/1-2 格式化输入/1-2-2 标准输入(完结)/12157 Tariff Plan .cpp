//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        int num, Mile = 0, Juice = 0;
        cin >> num;
        while(num--){
            int durations;
            cin >> durations;
            durations++;
            int M_m = durations / 30;
            if(durations % 30 != 0) M_m++;
            Mile += M_m * 10;
            int J_m = durations / 60;
            if(durations % 60 != 0) J_m++;
            Juice += J_m * 15;
        }
        cout << "Case " << i << ": ";
        if(Mile < Juice) cout << "Mile " << Mile << endl;
        else if(Mile > Juice) cout << "Juice " << Juice << endl;
        else cout << "Mile Juice " << Mile << endl;
    }
    return 0;
}