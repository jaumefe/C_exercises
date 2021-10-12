#include <stdio.h>
#include <math.h>

int main(int argc, char** argv[]){
    float radius;
    float perimeter;
    float area;
    printf("Please, introduce the radius of the circle to compute the perimeter and area:\n");
    scanf("%f", &radius);
    perimeter = 2*M_PI*radius;
    area = M_PI*radius*radius;
    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);
    return 0;
}