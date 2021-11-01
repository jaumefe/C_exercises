#include <stdio.h>

int main(int argc, char* argv[]){
    int x, y;
    printf("Introduce the first number\n");
    scanf("%d", &x);
    printf("Introduce the second number\n");
    scanf("%d", &y);
    if(x > y){
        if (x % y == 0){
            printf("Expected output: %d", x/y);
        } else
            printf("It is not possible to divide those numbers");
    } else
        printf("It is not possible to divide those numbers");
    printf("\n");
    return 0;
}