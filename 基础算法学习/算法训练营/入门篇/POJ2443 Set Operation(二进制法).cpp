//
// Created by zx208 on 2023/7/17.
//
#include <cstdio>
#include <bitset>
using namespace std;
const int N = 10010;
bitset<1010> s[N];

int main(){
    int num, nums, temp, Q, n1, n2;
    // 这里如果使用cin进行数据输入的话一定会超时
    scanf("%d", &num);
    for (int i = 1; i <= num; ++i) {
        scanf("%d", &nums);
        while(nums--){
            scanf("%d", &temp);
            s[temp].set(i); // s[i] -> i在哪个集合出现过
        }
    }

    scanf("%d", &Q);
    while(Q--){
        scanf("%d%d", &n1, &n2);
        if((s[n1] & s[n2]).count()) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}