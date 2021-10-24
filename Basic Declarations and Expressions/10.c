#include <stdio.h>

int main(int argc, char** argv[]){
    int num1, num2, result;
    printf("Input the first integer: \n");
    scanf("%d", &num1);
    printf("Input the second integer: \n");
    scanf("%d", &num2);
    printf("The product of the two integers is: %d\n", num1*num2);
    return 0;
}