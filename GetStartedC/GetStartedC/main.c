//
//  main.c
//  GetStartedC
//
//  Created by 余帅 on 17/3/30.
//  Copyright © 2017年 余帅. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int x = 1, y = 2, z[10];
    int *ip;
    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z[0];
    printf("x=%d y=%d\n", x, y);
    return 0;
}


