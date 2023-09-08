//
// Created by zx208 on 2023/5/9.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
string str[N][15];
map<pair<string, string>, vector<int> > mp;
// 解决方法是只枚举c1和c2，然后从上到下扫描各行。
// 每次碰到一个新的行r，把c1，c2两列的内容作为一个二元组存到一个map中。
// 如果map的键值中已经存在这个二元组，该二元组映射到的就是所要求的r1，而当前行就是r2。


int main(){
    int n, m;
    while(scanf("%d%d", &n, &m) == 2 && n && m) {
        getchar();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; ++j) {
                // 如何进行逗号分隔的可变字符串的输入
                string s;
                while(char ch = getchar()){
                    if(ch == ',' || ch == '\n' || ch == EOF){
                        break;
                    } else s.push_back(ch);
                }
                str[i][j] = s;
            }
        }

        for (int i = 0; i < m; ++i) {
            for (int j = i+1; j < m; ++j) {
                for (int k = 0; k < n; ++k) {
                    pair<string, string> tmp = make_pair(str[i][k], str[j][k]);
                    vector<int> t; t.push_back(i), t.push_back(j), t.push_back(k);
                    if(!mp.count(tmp)) mp[tmp] = t;
                    else{
                        for (auto a : mp[tmp]) {
                            cout << a << " ";
                        }
                        cout << k;
                    }
                }
            }
        }
//        for (int i = 0; i < n; ++i) {
//            for (int j = 0; j < m; ++j) {
//                cout << str[i][j] << " ";
//            }
//            cout << endl;
//        }
    }

    return 0;
}