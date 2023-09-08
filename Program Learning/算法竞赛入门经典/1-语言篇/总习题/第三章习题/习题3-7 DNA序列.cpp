//
// Created by zx208 on 2023/5/6.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    string str[m];
    for (int i = 0; i < m; ++i) {
        cin >> str[i];
    }
    for (int i = 0; i < n; ++i) {
        char result = ' ';
        int A = 0, C = 0, G = 0,T = 0;
        for (int j = 0; j < m; ++j) {
            if(str[j][i] == 'A') A++;
            else if(str[j][i] == 'C') C++;
            else if(str[j][i] == 'G') G++;
            else if(str[j][i] == 'T') T++;
        }
        int temp = max({A,C,G,T});
        temp == A ? result = 'A' : temp == C ? result = 'C' : temp == G ? result = 'G' : result = 'T';
        cout << result;
    }
    return 0;
}