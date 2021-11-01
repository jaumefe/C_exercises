#include <stdio.h>

int main(int argc, char* argv[]){
    int numbers[5];
    int temp;
    printf("Input the first number: \n");
    scanf("%d", &numbers[0]);
    printf("Input the second number: \n");
    scanf("%d", &numbers[1]);
    printf("Input the third number: \n");
    scanf("%d", &numbers[2]);
    printf("Input the fourth number: \n");
    scanf("%d", &numbers[3]);
    printf("Input the fifth number: \n");
    scanf("%d", &numbers[4]);
    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++){
        if(numbers[i] > temp){
            temp = i;
        }
    }
    printf("The maximum value is: %d\n", numbers[temp]);
    printf("Its position is: %d\n", temp+1);
    return 0;
}