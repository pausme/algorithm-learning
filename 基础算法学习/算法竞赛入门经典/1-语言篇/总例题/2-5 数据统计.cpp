//
// Created by zx208 on 2023/4/20.
//
/*
 * 输入一些整数，求出它们的最小值、最大值和平均值（保留3位小数）。输入保证这些
 * 数都是不超过1000的整数。
 * 样例输入：
 * 2 8 3 5 1 7 3 6
 * 样例输出：
 * 1 8 4.375
 */
// 提示
// 在Windows下，输入完毕后先按Enter键，再按Ctrl＋Z键，最后再按Enter
//键，即可结束输入。在Linux下，输入完毕后按Ctrl＋D键即可结束输入。
//scanf函数有返回值？对，它返回的是成功输入的变量个
//数，当输入结束时，scanf函数无法再次读取x，将返回0。

#include <iostream>
#include <climits>
using namespace std;

int main(){
    // 需要加上一个回车才能得到正确答案
    int num = 0,nums = 0, max_ = INT_MIN, min_ = INT_MAX;
    double sum = 0;
    while(scanf("%d", &num)){
        sum += num;
        nums++;
        if(max_ <= num) max_ = num;
        if(min_ >= num) min_ = num;
    }
    cout << min_ << " " << max_ << " " << sum/nums;
    return 0;
}

/* // 使用文件重定向
 * #define LOCAL
#include<stdio.h>
#define INF 1000000000
int main(){
    #ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
    #endif
    int x, n = 0, min = INF, max = -INF, s = 0;
    while(scanf("%d", &x) == 1){
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        //printf("x = %d, min = %d, max = %d\n", x, min, max);
        n++;
    }
    printf("%d %d %.3f\n", min, max, (double)s/n);
    return 0;
}
 */
/* // 使用文件读写
 * #include<stdio.h>
#define INF 1000000000
int main(){
    FILE *fin, *fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out", "wb");
    int x, n = 0, min = INF, max = -INF, s = 0;
    while(fscanf(fin, "%d", &x) == 1){
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    fprintf(fout, "%d %d %.3f\n", min, max, (double)s/n);
    fclose(fin);
    fclose(fout);
    return 0;
}
 */