#include <stdio.h>
int sumTwoNumbers();

int main(int argc, char * argv[]){
    int n1, n2;
    int *pt1, *pt2;
    pt1 = &n1;
    pt2 = &n2;
    printf("Input the first number :");
    scanf("%d", &n1);
    printf("\n");
    printf("Input the second number :");
    scanf("%d", &n2);
    printf("\n");
    printf("The sum of the entered numbers is : %d\n", sumTwoNumbers(&n1, &n2));
    return 0;
}

int sumTwoNumbers (int * n1, int *n2){
    return *n1 + *n2;
}