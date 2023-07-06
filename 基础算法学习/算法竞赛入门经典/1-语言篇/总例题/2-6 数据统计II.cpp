//
// Created by zx208 on 2023/4/20.
//
/*
 * 输入一些整数，求出它们的最小值、最大值和平均值（保留3位小数）。输入保证这些
 * 数都是不超过1000的整数。
 * 输入包含多组数据，每组数据第一行是整数个数n，第二行是n个整数。n＝0为输入结束
 * 标记，程序应当忽略这组数据。相邻两组数据之间应输出一个空行。
 * 样例输入：
 * 8
 * 2 8 3 5 1 7 3 6
 * 4
 * -4 6 10 0
 * 0
 * 样例输出：
 * Case 1: 1 8 4.375
 * Case 2: -4 10 3.000
 */

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums, Time = 1;
    while(scanf("%d", &nums) && nums){
        int num, number = 0 , max_ = INT_MIN, min_ = INT_MAX;
        double sum = 0;
        while(nums--){
            cin >> num;
            number++;
            sum += num;
            if(max_ <= num) max_ = num;
            if(min_ >= num) min_ = num;
        }
        cout << "Case " << Time++ << ": " << min_ << " " << max_ << " " << sum/number << endl;
    }
    return 0;
}
