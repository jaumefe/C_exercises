#include <stdio.h>

int main(int argc, char** argv[]){
    int distance; // in km
    float fuel; // in liters
    printf("Input total distance in km: \n");
    scanf("%d", &distance);
    printf("Input total fuel spent in liters: \n");
    scanf("%f", &fuel);
    printf("Average consumption (km/l): %.2f\n", distance/fuel);
    return 0;
}