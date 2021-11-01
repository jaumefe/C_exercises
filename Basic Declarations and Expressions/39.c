#include <stdio.h>

int main(int argc, char* argv[]){
    int x[2];
    int sum = 0;
    printf("Introduce the first number\n");
    scanf("%d", &x[0]);
    printf("Introduce the second number\n");
    scanf("%d", &x[1]);
    for(int i = x[0]; i <= x[1]; i++){
        if(i%17!=0){
            sum += i;
        }
    }
    printf("Sum=%d\n", sum);
    return 0;    
}