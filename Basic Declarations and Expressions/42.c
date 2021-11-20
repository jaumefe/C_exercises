#include <stdio.h>

int main (int argc, char* argv[]){
    int lines;
    int square, cube = 0;
    printf("Input the number of lines: \n");
    scanf("%d", &lines);
    for(int i = 1; i <= lines; i++){
            square = i*i;
            cube = square * i;
            printf("%d %d %d", i, square, cube);
        printf("\n");
    }
    return 0;
}