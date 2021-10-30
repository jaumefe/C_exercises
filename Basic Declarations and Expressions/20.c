#include <stdio.h>
#include <math.h>

int main (int argc, char** argv[]){
    int a,b,c;
    float r1, r2; //Both roots
    float delta;
    printf("Input of coefficient a: \n");
    scanf("%d", &a);
    printf("Input of coefficient b: \n");
    scanf("%d", &b);
    printf("Input of coefficient c: \n");
    scanf("%d", &c);
    delta = sqrt(b*b - 4*a*c);
    r1 = ((-1)*b + delta)/(2*a);
    r2 = ((-1)*b - delta)/(2*a);
    printf("Both roots are: r1 = %.2f; r2 = %.2f\n", r1, r2);
    return 0;
}