#include <stdio.h>

int main(int argc, char* argv[]){
    int n1, n2;
    printf("Input a pair of numbers (for example 10,2 : 2,10):\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    if (n1 > n2){
        printf("Descending order\n");
    } else if (n2 > n1){
        printf("Ascending order\n");
    }
    return 0;
}