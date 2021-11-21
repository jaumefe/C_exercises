#include <stdio.h>

int main(int argc, char*argv[]){
    int size;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);
    printf("\n");
    int x[size];
    printf("Input %d number of elements in the array: \n", size);
    for(int i = 0; i < size; i++){
        printf("element - %d: ", i);
        scanf("%d", &x[i]);
        printf("\n");
    }
    for(int i = 0; i < size; i++){
        printf("element - %d: %d\n", i, *(x+i));
    }
}
