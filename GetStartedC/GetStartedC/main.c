//
//  main.c
//  GetStartedC
//
//  Created by 余帅 on 17/3/30.
//  Copyright © 2017年 余帅. All rights reserved.
//

#include <stdio.h>

void pointerStarted();
void swap(int, int);
void swapByPointer(int *, int *);
int main(int argc, const char * argv[]) {
//    pointerStarted();
    
//  swap
    int x = 1;
    int y = 2;
    swap(x, y);
    printf("x = %d y = %d", x, y);
    swapByPointer(&x, &y);
    printf("x = %d y = %d", x, y);
    return 0;
}
void pointerStarted() {
    int x = 1, y = 2, z[10];
    int *ip;
    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z[0];
    printf("x=%d y=%d\n", x, y);
}
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swapByPointer(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


