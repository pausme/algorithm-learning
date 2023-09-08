//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    while(cin >> cases, cases){
        int m_V = 0, m_H = INT_MIN;
        int L, W, H;
        while(cases--){
            cin >> L >> W >> H;
            if(H > m_H || (H == m_H && (L * W * H) > m_V)){
                m_H = H;
                m_V = L * W * H;
            }
        }
        cout << m_V << endl;
    }
    return 0;
}