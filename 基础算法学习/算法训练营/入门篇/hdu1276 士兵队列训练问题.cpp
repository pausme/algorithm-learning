//
// Created by zx208 on 2023/7/12.
//
#include <iostream>
#include <list>
#include <numeric>
using namespace std;

int main(){
    int times;
    cin >> times;
    while(times--){
        int num;
        cin >> num;
        list<int> l(num);
        bool flag = true;
        int k = 2;
        iota(l.begin(), l.end(), 1);
        while(l.size() > 3){
            int cnt = 1;
            for( auto it = l.begin(); it != l.end();){
                if(cnt++ % k == 0) it = l.erase(it);
                else it++;
            }
            k = (k == 2 ? 3 : 2);
        }
        for(auto i : l) cout << i << " ";
        cout << endl;
    }
    return 0;
}