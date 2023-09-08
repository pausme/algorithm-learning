//
// Created by zx208 on 2023/6/20.
//
#include <bits/stdc++.h>
using namespace std;

typedef unsigned char *byte_pointer;

void show_byte(byte_pointer start, size_t len){
    size_t i;
    for(i = 0; i < len; i++){
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x){
    show_byte((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
    show_byte((byte_pointer) &x, sizeof(float ));
}

void show_pointer(void *x){
    show_byte((byte_pointer) &x, sizeof(void *));
}

int main(){
//    int val = 0x87654321;
//    byte_pointer valp = (byte_pointer) &val;
//    show_byte(valp, 1);
//    show_byte(valp, 2);
//    show_byte(valp, 3);
    const char *s = "abcdef";
    show_byte((byte_pointer) s, strlen(s));
    return 0;
}