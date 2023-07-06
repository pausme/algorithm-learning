//
// Created by zx208 on 2023/5/9.
//
#include <bits/stdc++.h>
using namespace std;

class Mycompare{
public:
    bool operator()(int n1, int n2){
        return n1 > n2;
    }
};

int main(){
    // 这边采用队列来进行实现，
    // 通过x, 2x, 3x, 5x 来进行生成数，
    // 并且判断是否已经在别的地方出现过
    set<int, Mycompare> s;
    int num, i = 1;
    cin >> num;
    while(true){
        s.insert(i);
        if(s.size() == num) break;
        s.insert(2 * i);
        if(s.size() == num) break;
        s.insert(3 * i);
        if(s.size() == num) break;
        s.insert(5 * i);
        if(s.size() == num) break;
        i++;
    }
    cout << *s.rbegin() << endl;
    return 0;
}