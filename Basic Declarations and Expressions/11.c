#include <stdio.h>

int main(int argc, char** argv[]){
    float w1, w2, n1, n2, avg;
    printf("Input weight item 1:\n");
    scanf("%f", &w1);
    printf("Input number of item 1:\n");
    scanf("%f", &n1);
    printf("Input weight item 2:\n");
    scanf("%f", &w2);
    printf("Input number of item 2:\n");
    scanf("%f", &n2);
    printf("The average value: %f\n", (w1*n1 + w2*n2)/(n1+n2));
    return 0;
}