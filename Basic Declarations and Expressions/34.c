#include <stdio.h>

int main(int argc, char* argv[]){
    int n1, n2, nmin, nmax;
    int sum = 0;
    printf("Input a pair of numbers (for example 10,2):\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    if(n1 > n2){
        nmax = n1;
        nmin = n2;
    }
    else if (n1 < n2){
        nmax = n2;
        nmin = n1;
    }
    else
        printf("Both numbers are the same\n");
    printf("List of odd numbers on the given interval: ");
    for(int i = nmin; i <= nmax; i++){
        if(i%2!=0){
            printf("%d\n", i);
            sum += i;
        }
    }
    printf("Sum=%d\n", sum);
    return 0;
}