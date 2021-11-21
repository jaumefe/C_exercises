#include <stdio.h>

int main(int argc, char* argv[]){
    int n1, n2, result;
    int *pt1, *pt2;
    pt1 = &n1;
    pt2 = &n2;
    printf("Input the first number :");
    scanf("%d", &n1);
    printf("\n");
    printf("Input the second number :");
    scanf("%d", &n2);
    printf("\n");
    if(*pt1 > *pt2)
        result = *pt1;
    else
        result = *pt2;
    printf("The maximum of the entered numbers is : %d\n", result);
}