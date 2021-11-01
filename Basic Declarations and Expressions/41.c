#include <stdio.h>

int main(int argc, char* argv[]){
    int lines;
    int count = 0;
    printf("Input the number of lines: \n");
    scanf("%d", &lines);
    for(int i = 0; i < lines; i++){
        for(int j= 0; j < 3; j++){
            count++;
            printf("%d ", count);
        }
        printf("\n");
    }
    return 0;
}