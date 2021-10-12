#include <stdio.h>

int main(int argc, char** argv[]){
    int height = 7; //inches
    int width = 5; //inches
    int perimeter;
    int area;
    perimeter = 2*height + 2*width;
    area = height*width;
    printf("The perimeter is %d inches\n", perimeter);
    printf("The area is %d square inches\n", area);
    return 0;
}