//
// Created by zx208 on 2023/8/21.
//
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, cases = 1;
    while (cin >> n && n){
        vector<int> bricks(n);

        int total = 0;
        for (int i = 0; i < n; i++){
            cin >> bricks[i];
            total += bricks[i];
        }
        int height = total / n; // 得到平均值
        total = 0;
        for (int i = 0; i < n; i++)
            if (bricks[i] < height)
                total += (height - bricks[i]);

        cout << "Set #" << cases++ << '\n';
        cout << "The minimum number of moves is " << total << ".\n\n";
    }
    return 0;
}