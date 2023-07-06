//
// Created by zx208 on 2023/5/9.
//
#include <bits/stdc++.h>
using namespace std;
stack<set<int> > st;

int main(){
    int num;
    cin >> num;
    while(num--) {
        int times;
        cin >> times;
        while(times--){
            string op;
            set<int> tmp, n1, n2, n3;
            switch (op[0]) {
                case 'P':
                    tmp.insert(1);
                    st.push(tmp);
                    break;
                case 'D':
                    tmp = st.top();
                    st.push(tmp);
                    break;
                case 'U':
                    if(st.size() >= 2){
                        n1 = st.top();
                        st.pop();
                        n2 = st.top();
                        st.pop();
                        for(auto i : n1){
                            if(n2.find(i) != n2.end()){
                                n3.insert(i);
                            }
                        }
                        st.push(n3);
                    }
                    break;
                case 'I':
                    if(st.size() >= 2){
                        n1 = st.top();
                        st.pop();
                        n2 = st.top();
                        st.pop();
                        for(auto i : n1){
                            n2.insert(i);
                        }
                        st.push(n2);
                    }
                    break;
                case 'A':
                    if(st.size() >=2){
                        // 如何处理集合的集合？
                        
                    }
                    break;
            }
        }
    }
    return 0;
}