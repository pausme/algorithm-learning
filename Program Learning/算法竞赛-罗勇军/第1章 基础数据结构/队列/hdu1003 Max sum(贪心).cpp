//
// Created by zx208 on 2023/7/7.
//
//http://acm.hdu.edu.cn/showproblem.php?pid=1003
#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int x = 1; x <= T; x++){
        int n;
        cin >> n;
        int maxsum = -INT_MAX;
        int start = 1, end = 1, p = 1, sum = 0;
        for (int i = 1; i <= n; ++i) {
            int a;
            cin >> a;
            sum += a;
            if(sum > maxsum){
                maxsum = sum;
                start = p;
                end = i;
            }
            if(sum < 0) {
                sum = 0;
                p = i + 1;
            }
        }
        printf("Case %d:\n", x);
        printf("%d %d %d", maxsum, start, end);
        if(x != T) cout << endl;
    }
    return 0;
}