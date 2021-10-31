#include <stdio.h>

int main (int argc, char* argv[]){
    int x,y;
    printf("Input the first number: \n");
    scanf("%d", &x);
    printf("Input the second number: \n");
    scanf("%d", &y);
    if (x > y){
        if (x % y == 0){
            printf("They are multiplied\n");
        }
        else {
            printf("They are NOT multiplied\n");
        }
    }
    else if (x < y){
        if (y % x == 0){
            printf("They are multiplied\n");
        }
        else {
            printf("They are NOT multiplied\n");
        }
    }
    return 0;
}