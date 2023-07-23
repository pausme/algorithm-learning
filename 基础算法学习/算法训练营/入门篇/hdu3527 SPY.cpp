//
// Created by zx208 on 2023/7/11.
//
//https://acm.hdu.edu.cn/showproblem.php?pid=3527
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> x, y, z, ans;

int main(){
    int A, B, C;
    string s;
    while(cin >> A >> B >> C){
        x.clear(), y.clear(), z.clear(), ans.clear();
        while(A--){
            cin >> s;
            x.push_back(s);
        }
        while(B--){
            cin >> s;
            y.push_back(s);
        }
        while(C--){
            cin >> s;
            z.push_back(s);
        }
        for (const auto& item : y) { // 在总人数出现过，但是在双重间谍中没有出现过
            if(find(x.begin(), x.end(), item) != x.end()){
                if(find(z.begin(), z.end(), item) == z.end()) ans.push_back(item);
            }
        }
        if(ans.empty()) cout << "No enemy spy" << endl;
        else {
            for(const auto& i : ans) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}