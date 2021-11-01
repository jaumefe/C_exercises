#include <stdio.h>

int main(int argc, char* argv[]){
    int n1;
    printf("Input a number to compute the square of the even numbers from 1 until the number you have chosen\n");
    scanf("%d", &n1);
    for(int i = 1; i <= n1; i++){
        if(i%2==0){
            printf("%d^2=%d\n",i, i*i);
        }
    }
    return 0;
}