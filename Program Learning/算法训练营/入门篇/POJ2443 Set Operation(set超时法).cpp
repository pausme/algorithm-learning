//
// Created by zx208 on 2023/7/17.
//
#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;
const int N = 1010;
set<int> s[N];

int main(){
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        int nums;
        scanf("%d", &nums);
        for (int j = 0; j < nums; ++j) {
            int temp;
            scanf("%d", &temp);
            s[i].insert(temp);
        }
    }

    int Q;
    scanf("%d", &Q);
    while(Q--){
        bool flag = false;
        int n1, n2;
        scanf("%d%d", &n1, &n2);
        for (int i = 0; i < num; ++i) {
            if(s[i].size() == 1) continue;
            else if(find(s[i].begin(), s[i].end(), n1) != s[i].end() && find(s[i].begin(), s[i].end(), n2) != s[i].end()){
                flag = true;
                break;
            }
        }
        if(flag) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}