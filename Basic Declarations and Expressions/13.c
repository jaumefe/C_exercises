#include <stdio.h>

int main(int argc,char** argv[]){
    int n1, n2, n3, max;
    printf("Input the first integer: \n");
    scanf("%d", &n1);
    printf("Input the second integer: \n");
    scanf("%d", &n2);
    printf("Input the thrid integer: \n");
    scanf("%d", &n3);
    if((n3 - n1 > 0) && (n3 - n2 > 0)){
        max = n3;
    } else if ((n2 - n1 > 0) && (n2 - n3 > 0)){
        max = n2;
    } else if ((n1 - n2 > 0) && (n1 - n3 > 0)){
        max = n1;
    }
    printf("Maximum value of the three integers: %d\n", max);
    return 0;
}