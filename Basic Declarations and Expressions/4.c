#include <stdio.h>

int main(int argc, char** argv[]){
    char char1 = 'X';
    char char2 = 'M';
    char char3 = 'L';
    printf("The combination you introduced is:%c%c%c\n", char1, char2, char3);
    printf("The inversed-order combination is: %c%c%c\n", char3, char2, char1);
    return 0;
}