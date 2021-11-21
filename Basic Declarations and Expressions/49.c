#include <stdio.h>

int main(int argc, char* argv[]){
    int first;
    printf("Input the first number of the array: ");
    scanf("%d", &first);
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("n[%d]= %d\n", i, first);
        first *= 3;
    }
    return 0;
}