#include <stdio.h>

int main (int argc, char** argv[]){
    int n[5];
    int result = 0;
    printf("Input the first number: \n");
    scanf("%d", &n[0]);
    printf("Input the second number: \n");
    scanf("%d", &n[1]);
    printf("Input the third number: \n");
    scanf("%d", &n[2]);
    printf("Input the fourth number: \n");
    scanf("%d", &n[3]);
    printf("Input the fifth number: \n");
    scanf("%d", &n[4]);
    for(int i=0; i < sizeof(n)/sizeof(int); i++){
        if(n[i]%2!=0){
            result += n[i];
        }
    }
    printf("The sum of odd numbers is: %d\n", result);
    return 0;
}