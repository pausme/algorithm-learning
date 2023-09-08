//
// Created by zx208 on 2023/7/24.
//
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=602&page=show_problem&problem=4414
//https://www.luogu.com.cn/problem/UVA12676
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int maxn = 60;
vector<long long > deep[maxn];

int main(){
    int n, x;
    while(cin >> n){
        for (int i = 0; i < n; ++i) {
            deep[i].clear();
        }
        int maxd = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            deep[x].push_back(0);
            maxd = max(maxd, x);
        }
        long long temp = 1;
        for (int i = maxd; i > 0; --i) {
            for (int j = 0; j < deep[i].size(); ++j) {
                if(!deep[i][j]) deep[i][j] = temp;
            }
            sort(deep[i].begin(), deep[i].end());
            for (int j = 0; j < deep[i].size(); ++j) {
                deep[i-1].push_back(deep[i][j]+deep[i][j+1]);
            }
            temp = *(deep[i].end() - 1);
        }
        cout << *deep[0].begin() << endl;
    }
    return 0;
}
