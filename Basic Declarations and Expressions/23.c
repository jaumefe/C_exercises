#include <stdio.h>

int main (int argc, char* argv[]){
    float a,b,c,perimeter;
    printf("Input of the first number:\n");
    scanf("%f", &a);
    printf("Input of the second number:\n");
    scanf("%f", &b);
    printf("Input of the third number:\n");
    scanf("%f", &c);
    if(((a+b)>c)&&((a+c)>b)&&((b+c)>a)){
        perimeter = a + b + c;
        printf("Perimeter: %.2f\n", perimeter);
    }
    return 0;
}