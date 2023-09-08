//
// Created by zx208 on 2023/7/24.
//
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=176
//https://www.luogu.com.cn/problem/UVA240
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
const int maxn = 110;
struct node{
    int freq;
    int va;
    int id;

    node(int x = 0, int y = 0, int z = 0){
        freq = x;
        va = y;
        id = z;
    }

    bool operator <(const node &b) const{
        if(freq == b.freq) return va > b.va;
        return freq > b.freq;
    }
};

int R, N;
int n, c;
int fre[maxn], father[maxn], code[maxn];
priority_queue<node > q;
int main(){
    int cas = 1;
    while(cin >> R && R){
        cin >> N;
        memset(fre, 0, sizeof fre);
        int total = 0;
        for (int i = 0; i < N; ++i) {
            cin >> fre[i];
            total += fre[i];
        }
        n = N;
        while((n-R)%(R-1) != 0) n++;
        while(!q.empty()) q.pop();
        for (int i = 0; i < n; ++i) {
            q.push(node(fre[i], i, i));
        }
        c = n;
        int rec = 0;
        while(q.size() != 1){
            int sum = 0, minva = n;
            for (int i = 0; i < R; ++i) {
                sum += q.top().freq;
                minva = min(q.top().va, minva);
                father[q.top().id] = c;
                code[q.top().id] = i;
                q.pop();
            }
            q.push(node(sum, minva, c));
            c++;
            rec += sum;
        }
        c--;
        printf("Set %d; average length %0.2f\n", cas, 1.0*rec / total);
        for (int i = 0; i < N; ++i) {
            int cur = i;
            string s;
            while(cur != c){
                s.push_back(code[cur] + '0');
                cur = father[cur];
            }
            reverse(s.begin(), s.end());
            cout << "    " << char('A' + i) << ": " << s <<endl;
        }
        cout << endl;
        cas++;
    }
    return 0;
}