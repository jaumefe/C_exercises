#include <stdio.h>

int main(int argc, char** argv[]){
    double numbers[5];
    printf("Input the first number: \n");
    scanf("%lf", &numbers[0]);
    printf("Input the second number: \n");
    scanf("%lf", &numbers[1]);
    printf("Input the third number: \n");
    scanf("%lf", &numbers[2]);
    printf("Input the fourth number: \n");
    scanf("%lf", &numbers[3]);
    printf("Input the fifth number: \n");
    scanf("%lf", &numbers[4]);
    int pnum = 0; 
    int nnum = 0;
    for (int i = 0; i < sizeof(numbers)/sizeof(double); i++){
        if (numbers[i] >= 0){
            pnum++;
        } else{
            nnum++;
      }
    }
    printf("Positive numbers: %d\n", pnum);
    printf("Negative numbers: %d\n", nnum);
    return 0;
}