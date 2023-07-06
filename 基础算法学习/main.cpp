//
// Created by zx208 on 2023/7/5.
//
#include <bits/stdc++.h>
using namespace std;

int a[10][10], num;

void knock(int i, int j, int b[10][10]){
    if(i == 1 && j == 1) b[i+1][j] ^= 1, b[i][j+1] ^= 1;
    if(i == 1 && j == 5) b[i+1][j] ^= 1, b[i][j-1] ^= 1;
    if(i == 5 && j == 1) b[i-1][j] ^= 1, b[i][j+1] ^= 1;
    if(i == 5 && j == 5) b[i-1][j] ^= 1, b[i][j-1] ^= 1;
    if(i >= 2 && i <= 4 && j >= 2 && j <= 4){
        b[i-1][j] ^= 1;
        b[i+1][j] ^= 1;
        b[i][j-1] ^= 1;
        b[i][j+1] ^= 1;
    } else if(i >= 2 && i <= 4 && j == 1){
        b[i-1][j] ^= 1;
        b[i+1][j] ^= 1;
        b[i][j+1] ^= 1;
    } else if(i >= 2 && i <= 4 && j == 5){
        b[i-1][j] ^= 1;
        b[i+1][j] ^= 1;
        b[i][j-1] ^= 1;
    }else if(i == 1 && j >= 2 && j <= 4){
        b[i+1][j] ^= 1;
        b[i][j-1] ^= 1;
        b[i][j+1] ^= 1;
    } else{
        b[i-1][j] ^= 1;
        b[i][j-1] ^= 1;
        b[i][j+1] ^= 1;
    }

}
int main(){
    cin >> num;
    while(num--){
        int min_times = INT_MAX;
        for(int i = 1; i <= 5; i++){
            string str;
            cin >> str;
            for(int j = 1; j <= 5; j++){
                a[i][j] = str[j-1] - '0';
            }
        }
        // �����ѡ��������� ��ȷ���õ�һ��ȫΪ0�������н���ȫ0����
        for(int i = 0; i < 32; i++){
            int times = 0;
//            ���ڵ�һ�е��������ö�٣����Բ���λ����ķ�ʽ��
//            ö��0 ~ 31 ��32��5λ����������
//            �����������ĵ�k(O <= k < 5) λΪ1 ���͵��01�����1�е�k+1�е����֡�
            int b[10][10];
//            copy(begin(a), end(a), begin(b));
            memcpy(b, a, sizeof (a));
            int tmp = i;
            while(tmp) {
                int temp = log2(tmp & -tmp);
                knock(1, temp + 1, b);
                times++;
                tmp -= tmp & -tmp;
            }
            // ͨ���ж������е��
            for(int j = 1; j <= 4; j++){
                for(int k = 1; k <= 5; k++){
                    if(b[j][k]) knock(j+1, k, b), times++;
                }
            }
            // �ж��Ƿ�Ϸ�
            for (int j = 1; j <= 5; ++j) {
                for (int k = 1; k <= 5; ++k) {
                    if(b[i][j]) times = INT_MAX;
                }
            }
            min_times = min(min_times, times);
//            for (int j = 1; j <= 5; ++j) {
//                for (int k = 1; k <= 5; ++k) {
//                    cout << b[j][k] << " ";
//                }
//                cout << endl;
//            }
        }
        cout << min_times << endl;
    }
    return 0;
}