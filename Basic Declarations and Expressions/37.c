#include <stdio.h>

int main(int argc, char* argv[]){
    int x,y;
    printf("Input coordinate x: \n");
    scanf("%d", &x);
    printf("Input coordinate y: \n");
    scanf("%d", &y);
    if(x > 0){
        if (y > 0){
            printf("Quadrant I(+,+)\n");
        } else
            printf("Quadrant IV(+,-)\n");
    } else{
        if (y > 0){
            printf("Quadrant II(-,+)\n");
        } else
            printf("Quadrant III(-,-)\n");
    }
    return 0;
}