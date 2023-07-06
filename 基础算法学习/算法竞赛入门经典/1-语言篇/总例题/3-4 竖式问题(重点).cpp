//
// Created by zx208 on 2023/4/24.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 100;
char buf[N];
string nums;

int main(){
    int number = 1;
    cin >> nums;
    for(int i = 111 ; i <= 999 ; i++){
        for (int j = 11; j <= 99; ++j) {
            int x = i * (j%10);
            int y = i * (j/10);
            int z = i * j;
            sprintf(buf, "%d%d%d%d%d", i, j, x, y, z);
            int ok = 1;
            // 没有进行寻找
            for (int k = 0; k < strlen(buf); ++k) {
                if(nums.find(buf[k]) >= nums.length()) ok = 0;
            }
            if(ok){ // 结构正确
                printf("<%d>\n", number++);
                printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n",i, j, x, y, z);
            }
        }
    }
    return 0;
}