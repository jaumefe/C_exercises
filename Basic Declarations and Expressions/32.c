#include <stdio.h>

int main(int argc, char* argv[]){
    int n1;
    printf("Input of a number: \n");
    scanf("%d", &n1);
    for(int i = 1; i <= 100; i++){
        if(i%n1==3){
            printf("%d\n",i);
        }
    }
    return 0;
}