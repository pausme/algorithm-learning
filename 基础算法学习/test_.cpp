#include <bits/stdc++.h>
using namespace std;

int fun(int num){
    int temp = 0;
    while(num){
        temp += num % 10;
        num /= 10;
    }
    return temp;
}

int main(){
    int num = 100;
    cout << fun(num);
}
