
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    int *testIntPtr;
    double *konde; 
    char *mamad;

    printf("Int pointer size is %ld bytes\n",sizeof(testIntPtr));
    printf("point size is %ld bytes \n", sizeof(konde));
    return 0;
}
