//
// Created by zx208 on 2023/7/22.
//
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=146
//https://www.luogu.com.cn/problem/UVA210
#include <bits/stdc++.h>
using namespace std;
const int maxNum = 110;
int n;
int times[5];
int quantum;
int val[26];
int p[maxNum];
vector<string> prg[maxNum];
deque<int > readyQ;
queue<int > blockQ;
bool locked;
string s;

void run(int i){
    int t = quantum, v;
    while(t > 0){
        string cur;
        cur = prg[i][p[i]];
        switch (cur[2]) {
            case '=':
                t -= times[0];
                v = cur[4] - '0';
                if(cur.size() == 6) v = v*10 + cur[5] - '0';
                val[cur[0] - 'a'] = v;
                break;
            case 'i':
                t -= times[1];
                cout << i << ": " << val[cur[6] - 'a'] << endl;
                break;
            case 'c':
                t -= times[2];
                if(locked){
                    blockQ.push(i);
                    return;
                } else locked = true;
                break;
            case 'l':
                t -= times[3];
                locked = false;
                if(!blockQ.empty()){
                    int u = blockQ.front();
                    blockQ.pop();
                    readyQ.push_front(u);
                }
                break;
            case 'd':
                return;
        }
        p[i]++;
    }
    readyQ.push_back(i);
}

int main(){
    int T;
    cin >> T;
    while(T--){
        cin >> n;
        for (int i = 0; i < 5; ++i) {
            cin >> times[i];
        }
        cin >> quantum;
        memset(val, 0, sizeof val);
        for (int i = 1; i <= n; ++i) {
            prg[i].clear();
            while(getline(cin, s)){
                prg[i].push_back(s);
                if(prg[i].back() == "end") break;
            }
            readyQ.push_back(i);
        }
        memset(p, 0, sizeof p);
        memset(val, 0, sizeof val);
        locked = false;
        while(!readyQ.empty()){
            int pid = readyQ.front();
            readyQ.pop_front();
            run(pid);
        }
        if(T) cout << endl;
    }
    return 0;
}