#include <stdio.h>
#include <math.h>

int main(int argc, char** argv[]){
    int x1, y1, x2, y2;
    double distance;
    printf("Input x1: \n");
    scanf("%d", &x1);
    printf("Input y1: \n");
    scanf("%d", &y1);
    printf("Input x2: \n");
    scanf("%d", &x2);
    printf("Input y2: \n");
    scanf("%d", &y2);
    distance = sqrt(((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)));
    printf("Distance between the two points is: %.2f\n", distance);
    return 0;
}