//
// Created by zx208 on 2023/5/7.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    // 问题1：int型整数的最小值和最大值是多少（需要精确值）？
    int x1 = INT_MAX, x2 = INT_MIN;
    cout << x1 << x2;
    int x=1;
    while(x>0){x++;}
    printf("min:%d max:%d",x,x-1);

    // 问题2：double型浮点数能精确到多少位小数？或者，这个问题本身值得商榷？
    printf("%.20f",1.0/3);

    // 问题3：double型浮点数最大正数值和最小正数值分别是多少（不必特别精确）？
    double i=0.001;
    while(i>0){i+=0.001;}
    printf("min:%.100lf max:%.100lf",i,i-1);

    // 问题4：逻辑运算符号“&&”、“||”和“！”（表示逻辑非）的相对优先级是怎样的？也就是
    //说，a&&b||c应理解成（a&&b）||c还是a&&（b||c），或者随便怎么理解都可以？
    // || < && < !=
    int a = 1, b = 1, c = 0;
//    cout << a && b || c << " " << (a && b) || c << " " << a &&(b || c);
    printf("%d %d %d",a && b || c,(a && b) || c, a &&(b || c));
    //问题5：if（a）if（b）x＋＋；else y＋＋的确切含义是什么？这个else应和哪个if配套？
    //有没有办法明确表达出配套方法？
    // else只和最近一个if匹配
    return 0;
}
