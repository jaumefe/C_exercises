#include <stdio.h>

int main (int argc, char** argv[]){
    int p,q,r,s;
    printf("Input of the first number: \n");
    scanf("%d", &p);
    printf("Input of the second number: \n");
    scanf("%d", &q);
    printf("Input of the third number: \n");
    scanf("%d", &r);
    printf("Input of the fourth number: \n");
    scanf("%d", &s);
    if(q > 0 && r > 0 && s > 0 && p%2==0 && q > r && s > p && (r + s) > (p + q))
        printf("Correct Values\n");
    else
        printf("Wrong Values\n");
}