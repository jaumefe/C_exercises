#include <stdio.h>

int main(int argc, char* argv[]){
    int m = 300;
    double fx = 300.600006;
    char cht = 'z';

    int * m1 = &m;
    double * fx1 = &fx;
    char * cht1 = &cht;
    printf("Pointer : Demonstrate the use of & and * operator :\n");
    printf("--------------------------------------------------------\n");
    printf("m = %d\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n", cht);
    printf("Using & operator :\n -----------------------\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of m = %p\n", &cht);
    printf("Using * and & operator :\n -----------------------\n");
    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of m = %c\n", *(&cht));
    printf("Using only pointer operator:\n -----------------------\n");
    printf("address of m = %p\n", m1);
    printf("address of fx = %p\n", fx1);
    printf("address of m = %p\n", cht1);
    printf("Using only pointer operator :\n -----------------------\n");
    printf("value at address of m = %d\n", *m1);
    printf("value at address of fx = %f\n", *fx1);
    printf("value at address of m = %c\n", *cht1);
}