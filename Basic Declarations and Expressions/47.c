#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    int num;
    printf("Input an integer:");
    scanf("%d", &num);
    printf("\n");
    for(int i = 1; i <= num ; i++){
        if (num%i==0){
            printf("%d\n", i);
        }
    }
    return 0;
}