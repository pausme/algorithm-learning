//
// Created by zx208 on 2023/7/19.
//
#include <bits/stdc++.h>
using namespace std;

struct Stu{
    int id{0};
    string name;
    Stu *next{nullptr};
};

int main(){
    int num;
    cin >> num;
    while(num--){
        int nums;
        cin >> nums;
        Stu *now, *head, *p, *dummyhead;
        head = new Stu;
        cin >> head->id >> head->name;
        dummyhead = new Stu{0};
        dummyhead->next = head;
        for (int i = 2; i <= nums; ++i) {
            now = dummyhead;
            p = new Stu;
            cin >> p->id >> p->name;
            // 可以通过判断是否为头节点来分别操作 ,但是通过虚拟头节点的话不需要判断
            while(now->next != nullptr){
                if(now->next->id > p->id){
                    p->next = now->next;
                    now->next = p;
                    break;
                } else now = now->next;
            }
            if(now->next == nullptr) now->next = p;
        }
        now = dummyhead->next;
        while(now != nullptr){
            cout << now->id << " " << now->name << endl;
            now = now->next;
        }
    }
    return 0;
}