#include <stdio.h>

int main(int argc, char** argv[]){
    int days, months, years;
    printf("Input days: \n");
    scanf("%d", &days);
    years = days / 365;
    months = (days % 365) / 30;
    days = days - months*30 - years*365;
    printf("%d Year(s)\n", years);
    printf("%d Month(s)\n", months);
    printf("%d Day(s)\n", days);
    return 0;
}