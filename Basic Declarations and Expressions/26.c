#include <stdio.h>

int main(int argc, char* argv[]){
    printf("The even numbers between 1 and 50 are: ");
    for (int i = 1; i <= 50; i++){
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}