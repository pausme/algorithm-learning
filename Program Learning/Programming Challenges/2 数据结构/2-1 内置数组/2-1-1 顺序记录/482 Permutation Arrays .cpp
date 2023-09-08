//
// Created by zx208 on 2023/8/31.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    string line;
    getline(cin, line);
    int cases = stoi(line);

    for (int i = 1; i <= cases; ++i) {
        if(i > 1) cout << endl;
        vector<int> order;
        vector<string > num;
        getline(cin, line);
        getline(cin, line);
        istringstream iss(line); // 怎么进行输入
        int index;
        while(iss >> index){
            order.push_back(index);
        }

        getline(cin, line);
        iss.clear();
        iss.str(line);
        string block;
        while(iss >> block) num.push_back(block);

        vector<int > output(order.size());
        for (int j = 0; j < order.size(); ++j) {
            output[order[j] - 1] = j;
        }
        for (int j = 0; j < output.size(); ++j) {
            cout << num[output[j]] << '\n';
        }
    }
    return 0;
}