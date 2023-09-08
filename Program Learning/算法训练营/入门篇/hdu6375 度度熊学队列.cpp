//
// Created by zx208 on 2023/7/12.
//
//https://acm.hdu.edu.cn/showproblem.php?pid=6375
// Memory Limit Exceeded
#include <iostream>
#include <deque>
using namespace std;
const int N = 150010;
deque<int> de[N];

int main(){
    int n, q;
    cin >> n >> q;
    while(q--){
        int op, u, w, val, v;
        cin >> op;
        if(op == 1){ //在编号为u 的队列中加入一个权值为val的元素（w=0表示加在最前面，w =1表示加在最后面）。
            cin >> u >> w >> val;
            if(w == 0){
                de[u].push_front(val);
            } else{
                de[u].push_back(val);
            }
        } else if(op == 2){ // 询问编号为u 的队列中的某个元素并删除它（w =0表示询问并操作最前面的元素，w =1表示询问并操作最后面的元素）
            cin >> u >> w;
            if(de[u].empty()) {
                cout << -1 << endl;
                continue;
            }
            if(w == 0){
                cout << de[u].front() << endl;
                de[u].pop_front();
            } else{
                cout << de[u].back() << endl;
                de[u].pop_back();
            }
        } else if(op == 3){
            cin >> u >> v >> w;
            if(w == 0){
                // u结尾和v开头接在一起
                for(auto i : de[v]){
                    de[u].push_back(i);
                    de[v].pop_front();
                }
            } else{
                // v翻转接在u结尾
                while(!de[v].empty()){
                    int tmp = de[v].back();
//                    cout << "当前tmp的值为" << tmp << " " << u << endl;
                    de[v].pop_back();
                    de[u].push_back(tmp);
                }
            }
        }
    }
    return 0;
}