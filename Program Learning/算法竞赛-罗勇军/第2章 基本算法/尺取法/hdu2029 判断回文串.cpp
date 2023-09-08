//
// Created by zx208 on 2023/7/8.
//
//https://acm.hdu.edu.cn/showproblem.php?pid=2029
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string str;
        bool flag = true;
        cin >> str;
        for(int i = 0, j = str.length()-1; i < j; i++, j--){
            if(str[i] != str[j]) {
                flag = false;
                break;
            }
        }
        flag ? cout << "yes" << endl : cout << "no" << endl;
    }
    return 0;
}