#include <stdio.h>

#define A 10

#ifndef A
int f() {
    int a = 10;
}
#endif 

#ifdef C
void main() {
#ifdef A
#ifdef B

    int i = 0;

#endif
#ifdef C
    int x = 1;
#endif
    int j = 2;
#endif
}
#endif
