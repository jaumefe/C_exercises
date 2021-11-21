#include <stdio.h>

int main(int argc, char* argv[]){
    int x[5];
    printf("Input the 5 members of the array:\n");
    for(int i = 0; i < sizeof(x)/sizeof(int); i++){
        scanf("%d", &x[i]);
        if(x[i]<=0){
            x[i] = 100;
        }
    }
    for(int i = 0; i < sizeof(x)/sizeof(int); i++ ){
        printf("n[%d]=%d\n", i, x[i]);
    }
    return 0;
}