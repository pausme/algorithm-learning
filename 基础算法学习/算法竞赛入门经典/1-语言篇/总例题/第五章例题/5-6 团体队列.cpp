//
// Created by zx208 on 2023/5/9.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;

int main(){
    deque<string> de[N], result;
    int num, nums, times = 1;
    while (scanf("%d", &num) && num) {
        cout << "Scenario #" << times++ << endl;
        for (int i = 0; i < num; ++i) {
            cin >> nums;
            while(nums--){
                string data;
                cin >> data;
                de[i].push_back(data);
            }
        }
        getchar();
// 每次新来一个人时，如果他有队友在排队，
// 那么这个新人会插队到最后一个队友的身后
// 如果没有任何一个队友排队，则他会排到长队的队尾。
        while(true){
            string op;
            getline(cin, op);
            if(op[0] == 'E'){
//                先检查要进入的编号在哪个队列集合中出现过，
//                然后得到result队列中最后一次有出现要进入的编号队列的位置,
//                若有，则插入该位置后面，否则直接插入result队列最后面
                int temp = 0; // 先得到编号
                for(int i = 0 ; i < op.length(); i++){
                    if(!isdigit(op[i])) continue;
                    else {
                        temp = i;
                        break;
                    }
                }
                string number = op.substr(temp, op.length() - temp);
//                cout << "当前编号位：" << number << endl;

                // 确定要进入的编号到底在哪个队列
                deque<string> index;
                for(auto &i : de){
                    bool flag = true;
                    for (const auto& it : i) {
                        if(it == number) {
                            index = i;
                            flag = false;
                            break;
                        }
                    }
                    if(!flag) break;
                }
//                cout << "当前编号在第" << index << "个队列中" << endl;
                // 进行插入
                auto tmp = result.begin();
                bool flag = true;
                for(auto &i : index){
//                    for (auto item : de[index]) {
//                        if(item == result[i]) w = i;
//                    }
                    auto it = std::find(result.begin(), result.end(), i);
                    if(it == result.end()){
                        // 没找到
                        continue;
                    } else{
                        tmp = max(tmp, it);
                        flag = false;
                    }
                }
                if(flag) result.insert(result.end(), number);
                else result.insert(tmp + 1, number);
            } else if(op[0] == 'D'){
                if(!result.empty()) {
                    cout << result.front() << endl;
                    result.pop_front();
                }
            } else if(op[0] == 'S') break;
        }
    }
    return 0;
}