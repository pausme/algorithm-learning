//
// Created by zx208 on 2023/7/11.
//
//http://poj.org/problem?id=1028
#include <iostream>
#include <stack>
using namespace std;
stack<string > fw, bh;

int main(){
    string str, now = "http://www.acm.org/";
    while(getline(cin, str)){
        bool flag = true;
        if(str[0] == 'Q') break;
        switch (str[0]) {
            case 'B':
                if(!bh.empty()){
                    fw.push(now);
                    now = bh.top();
                    bh.pop();
                } else cout << "Ignored" << endl, flag = false;
                break;
            case 'F':
                if(!fw.empty()){
                    bh.push(now);
                    now = fw.top();
                    fw.pop();
                } else cout << "Ignored" << endl, flag = false;
                break;
            case 'V':
                int tmp = str.find(" ");
                bh.push(now);
                now = str.substr(tmp+1, str.length()-tmp-1);
                while(!fw.empty()) fw.pop();
                break;
        }
        if(flag) cout << now << endl;
    }
    return 0;
}