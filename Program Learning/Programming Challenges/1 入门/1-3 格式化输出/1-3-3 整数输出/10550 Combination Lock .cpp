//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int now, fi, se, th;
    while(cin >> now >> fi >> se >> th, now || fi || se || th){
        int result = 360 * 3;
        int turn = now - fi;
        if (turn < 0) turn += 40;
        result += turn * 9;
        turn = se - fi;
        if (turn < 0) turn += 40;
        result += turn * 9;
        turn = se - th;
        if (turn < 0) turn += 40;
        result += turn * 9;
        cout << result << endl;
    }
    return 0;
}