//
// Created by zx208 on 2023/5/6.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 11;
char nums[N][N];
int result[N][N];

int main(){
    int r, c, index = 1;
    cin >> r >> c;
    memset(result, 0, sizeof result);
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> nums[i][j];
            if(nums[i][j] == '*') continue;
            if(i == 0 || j == 0 || nums[i-1][j] == '*' || nums[i][j-1] == '*'){
                result[i][j] = index++;
            }
        }
    }
//    for(int i = 0; i < r; i++){
//        for(int j = 0; j < c; j++){
//            cout << result[i][j] << " ";
//        }
//        cout << endl;
//    }


    return 0;
}