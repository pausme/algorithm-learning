//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    cout << "Lumberjacks:" << endl;
    while(cases--){
        int high = 0, low = 0;
        int temp; cin >> temp;
        for (int i = 1; i < 10; ++i) {
            int num;
            cin >> num;
            if(num > temp) high++;
            else if(num < temp) low++;
            temp = num;
        }
        if(high == 9 || low == 9) cout << "Ordered" << endl;
        else cout << "Unordered" << endl;
    }
    return 0;
}