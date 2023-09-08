//
// Created by zx208 on 2023/5/9.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
string str[N];

int main(){
    int n;
    while(scanf("%d", &n) && n){
        int len = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> str[i];
            int temp = str[i].length();
            len = max(len, temp);
        }
        cout << "------------------------------------------------------------" << endl;
        sort(str, str + n); // 对字符串数组进行排序
        int column = floor(62 * 1.0 / (len+2));
        int row = ceil(n * 1.0 / column);
//        cout << column << "?" << row << "?" <<  len << endl;
//        cout << str[17] << " " << str[18] << " " << str[19];
        for(int i = 1; i <= row; i++){
            for(int j = i ;j <= n; j += row){
                cout << str[j];
                if(j <= (column-1) * row){
                    for(int k = 0 ; k < len - str[j].length()+2; k++){
                        cout << " ";
                    }
                } else{
                    for(int k = 0 ; k < len - str[j].length(); k++){
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}