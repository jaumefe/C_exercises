#include <stdio.h>

int main(int argc, char* argv[]){
    int n1;
    printf("Input a number to be classified\n");
    scanf("%d", &n1);
    if(n1 > 0){
        if(n1%2 == 0){
            printf("Positive even\n");
        } else {
            printf("Positive odd\n");
        }
    } else if(n1 < 0){
        if(n1%2 == 0){
            printf("Positive even\n");
        } else {
            printf("Positive odd\n");
        }
    } else if (n1 == 0){
        printf("Zero\n");
    }
    return 0;
}