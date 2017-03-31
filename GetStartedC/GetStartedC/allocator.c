//
//  allocator.c
//  GetStartedC
//
//  Created by 余帅 on 17/3/31.
//  Copyright © 2017年 余帅. All rights reserved.
//

#include <stdio.h>

#define ALLOCSIZE 1000 /* size of available space*/

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

/*return pointer to n characters*/
char *alloc(int n) {
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
        return allocp - n;
    } else {
        return 0;   /*C guarantees that zero is never a valid address for data*/
    }
}

/*free storage pointed to by p*/
void afree(char *p) {
    if(p >= allocbuf && p < allocbuf + ALLOCSIZE) {
        allocp = p;
    }
}










