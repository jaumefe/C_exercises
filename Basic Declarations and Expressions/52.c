#include <stdio.h>

int main(int argc, char* argv[]){
    int imin, xmin, num = 0;
    printf("Input the length of the array:");
    scanf("%d", &num);
    printf("\n");
    int x[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &x[i]);
        if (i == 0){
            imin = i;
            xmin = x[i];
        }else {
            if(x[i] < xmin){
                imin = i;
                xmin = x[i];
            }
        }
    }
    printf("Smallest Value:%d\n", xmin);
    printf("Position of the element:%d\n", imin);
    return 0;
}