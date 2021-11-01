#include <stdio.h>

int main(int argc, char* argv[]){
    int numbers[5];
    int sum = 0;
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
        if (numbers[i]%2!=0){
            sum += numbers[i];
        }
    }
    printf("The sum of all the odd numbers is: %d\n", sum);
    return 0;
}