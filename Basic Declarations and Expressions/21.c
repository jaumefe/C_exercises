#include <stdio.h>
#include <math.h>

int main(int argc, char** argv[]){
    int n1;
    int N1;
    printf("Please introduce a number\n");
    scanf("%d", &n1);
    if (n1 > 0 && n1 < 80){
        N1 = ceil(n1/10.0)*10;
        printf("The range is [0, %d]\n", N1);
    }
    else
        printf("Out of range\n");
    return 0;
}