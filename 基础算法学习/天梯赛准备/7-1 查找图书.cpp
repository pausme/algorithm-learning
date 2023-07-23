//
// Created by zx208 on 2023/7/19.
//
#include <bits/stdc++.h>
using namespace std;

struct Book{
    string id;
    string name;
    double price{0};
    Book *next{nullptr};
};

int main(){
    int num;
    cin >> num;
    while(num--){
        int nums;
        cin >> nums;
        Book *now, *head, *p;
        head = new Book;
        cin >> head->id >> head->name >> head->price;
        double max_price = head->price;
        now = head;
        for (int i = 2; i <= nums; ++i) {
            p = new Book;
            cin >> p->id >> p->name >> p->price;
            if(p->price >= max_price) max_price = p->price;
            now->next = p;
            now = p;
        }

        now = head;
        while(now != nullptr){
            if(now->price == max_price) printf("%s %s %.2lf\n", now->id.c_str(), now->name.c_str(), now->price);
            now = now->next;
        }
    }
    return 0;
}