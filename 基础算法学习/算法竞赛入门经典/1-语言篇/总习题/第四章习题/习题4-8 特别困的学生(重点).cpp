//
// Created by zx208 on 2023/5/8.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 11;

// 每个学生在临睡前会察看全班睡觉人数是否严格大于清醒人数，
// 只有这个条件满足时才睡觉，否则就坚持听课Ai分钟后再次检查这个条件。

struct stu{
    int A;
    int B;
    int C;
    bool isSleep = true;
} Stu[N];

int main(){
    int n, temp = 1, num = 0;
    while(scanf("%d", &n) && n) {
        printf("Case %d: ", temp++);
        for (int i = 0; i < n; ++i) {
            cin >> Stu[i].A >> Stu[i].B >> Stu[i].C;
            Stu[i].C < Stu[i].A + 1 ? Stu[i].isSleep = true : Stu[i].isSleep = false;
        }
//        for (int i = 0; i < n; ++i) {
//            Stu[i].isSleep ? cout << "Yes" : cout << "No";
//        }
    }

    return 0;
}