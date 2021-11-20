#include <stdio.h>

int main(int argc, char* argv[]){
    int lines, limit;
    int count = 0;
    printf("Input the number of lines: \n");
    scanf("%d", &lines);
    printf("Input the number of elements per line: \n");
    scanf("%d", &limit);
    for(int i = 0; i < lines; i++){
        for(int j= 1; j <= limit; j++){
            count++;
            printf("%d ", count);
        }
        printf("\n");
    }
    return 0;
}