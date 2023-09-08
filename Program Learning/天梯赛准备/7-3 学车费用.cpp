//
// Created by zx208 on 2023/7/19.
//
#include <bits/stdc++.h>
using namespace std;

struct Person{
    string name;
    int sum_fee{0};
    int id;
} person[30];

bool cmp(Person s1, Person s2){
    if(s1.sum_fee == s2.sum_fee){
        if(s1.name == s2.name) return true;
        else return s1.name < s2.name;
    } else return s1.sum_fee > s2.sum_fee;
}

int main(){
    int num;
    while(scanf("%d", &num) && num){
        for (int i = 0; i < num; ++i) {
            cin >> person[i].name;
            int temp;
            while(scanf("%d", &temp)){
                person[i].sum_fee += temp;
            }
            person[i].id = i+1;
        }
        sort(person, person+num, cmp);
        int max_price = INT_MIN, rank = 1, person_num = 0;
        for (int i = 0; i < num; ++i) {
            if(person[i].sum_fee >= max_price){
                cout << rank;
                person_num++;
            } else{
                max_price = person[i].sum_fee;
                rank += person_num;
                cout << rank;
            }
            cout << person[i].id << " " << person[i].name << " " << person[i].sum_fee << endl;
        }
    }
    return 0;
}