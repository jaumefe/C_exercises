#include <stdio.h>

int main(int argc, char* argv[]){
    int x[5];
    int xmin, imin;
    printf("Input the 5 members of the array: \n");
    for(int i = 0; i < sizeof(x)/sizeof(int); i++){
        scanf("%d", &x[i]);
        if (i == 0){
            xmin = x[i];
        }
        else{
            if(x[i]<xmin){
                xmin = x[i];
                imin = i;
            }
        }
    }
    printf("n[%d]=%d\n", imin, xmin);
    return 0;

}