#include <stdio.h>

int main(int argc, char** argv[]){
    int month;
    char* months[] = {"January", "February", "March", "April", "May", "June", "July","September", "October", "November", "December"};
    printf("Introduce a number between 1 and 12: \n");
    scanf("%d", &month);
    printf("The month is: %s\n", months[month - 1]);
    return 0;
}