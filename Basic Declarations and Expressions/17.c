#include <stdio.h>

int main(int argc, char** argv[]){
    int seconds, minutes, hours;
    printf("Input seconds: \n");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds - hours*3600 - minutes*60;
    printf("There are:\n H:M:S - %d:%d:%d\n", hours, minutes, seconds);
    return 0;
}