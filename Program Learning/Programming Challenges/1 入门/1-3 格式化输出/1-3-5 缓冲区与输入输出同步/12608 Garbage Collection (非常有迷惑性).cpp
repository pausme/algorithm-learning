//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;
const int n = 1e3 + 10;

int main(){
    int cases;
    cin >> cases;
    while(cases--){
        int W, N, xi, wi;
        cin >> W >> N;
        int dist = 0, loaded = 0, lastx = 0;
        for (int i = 1; i <= N; ++i) {
            cin >> xi >> wi;
            dist += xi - lastx;
            while (true) {
                if(wi + loaded > W){
                    dist += 2 * xi;
                    loaded = 0;
                }else if(wi + loaded == W){
                    dist += xi;
                    wi = loaded = lastx = 0;
                    break;
                }else{
                    loaded += wi;
                    lastx = xi;
                    break;
                }
            }
        }
        dist += lastx;
        cout << dist << endl;
    }
    return 0;
}