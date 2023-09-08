//
// Created by zx208 on 2023/8/21.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, u, d, f;
    while(cin >> h >> u >> d >> f, h){
        // 1 1 1 1
        h *= 100, d *= 100;
        int Day = 0;
        int distance_Climbed = 0, factor = 0;
        while(true){
            Day++;
            int climbed = u * (100 - factor);
            if(climbed < 0) climbed = 0;
            distance_Climbed += climbed;
            if(distance_Climbed > h){
                cout << "success on day " << Day << endl;
                break;
            }
            distance_Climbed -= d;
            if(distance_Climbed < 0){
                cout << "failure on day " << Day << endl;
                break;
            }
            factor += f;
        }
    }
    return 0;
}

/*
6  3  1  10
10  2  1  50
50  5  3  14
50  6  4  1
50  6  3  1
1  1  1  1
0  0  0  0
 *
 * success  on  day  3
 * failure  on  day  4
 * failure  on  day  7
 * failure  on  day  68
 * success  on  day  20
 * failure  on  day  2
*/
