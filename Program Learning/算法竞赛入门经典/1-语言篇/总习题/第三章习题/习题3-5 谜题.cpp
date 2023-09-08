//
// Created by zx208 on 2023/5/6.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    char result[5][5] ={{'T', 'R','G','S','J'},{'X','D','O','K','I'},
                        {'M',' ','V','L','N'},{'W','P','A','B','E'},
                        {'U','Q','H','C','F'}};
    char c;
    int row_index = 2, colunm_index = 1;
    while(scanf("%c",&c)){
        if (c == '0') break;
        // 加上边界判断条件
        switch (c) {
            case 'A':
                if(row_index < 5 && row_index > -1){
                    swap(result[row_index][colunm_index], result[row_index-1][colunm_index]);
                    row_index--;
                } else{
                    row_index++;
                    cout << "This puzzle has no final configuration." << endl;
                }
                break;
            case 'B':
                if(row_index < 5 && row_index > -1){
                    swap(result[row_index][colunm_index], result[row_index+1][colunm_index]);
                    row_index++;
                } else{
                    row_index--;
                    cout << "This puzzle has no final configuration." << endl;
                }
                break;
            case 'L':
                if(colunm_index < 5 && colunm_index > -1){
                    swap(result[row_index][colunm_index], result[row_index][colunm_index-1]);
                    colunm_index--;
                } else{
                    colunm_index++;
                    cout << "This puzzle has no final configuration." << endl;
                }
                break;
            case 'R':
                if(colunm_index < 5 && colunm_index > -1){
                    swap(result[row_index][colunm_index], result[row_index][colunm_index+1]);
                    colunm_index++;
                } else{
                    colunm_index--;
                    cout << "This puzzle has no final configuration." << endl;
                }
                break;
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}