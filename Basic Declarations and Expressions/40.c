#include <stdio.h>

int main(int argc, char* argv[]){
    int x, y;
    printf("Introduce the first number\n");
    scanf("%d", &x);
    printf("Introduce the second number\n");
    scanf("%d", &y);
    printf("The list is: \n");
    for(int i = x; i <= y; i++){
        if(i%7==2 || i%7==3){
            printf("%d\n", i);
        }
    }
    return 0;
}