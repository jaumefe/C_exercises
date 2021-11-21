#include <stdio.h>

int main(int argc, char* argv[]){
    int x[5], array_n[5];
    printf("Input the 5 members of the array: \n");
    for(int i = 0; i < sizeof(x)/sizeof(int); i++){
        scanf("%d", &x[i]);
        if (i == 0){
            array_n[sizeof(x)/sizeof(int)-1] = x[i];
        } else if (i == 1){
            array_n[sizeof(x)/sizeof(int)-2] = x[i];
        } else if (i == 2){
            array_n[2] = x[2];
        } else if (i == 3){
            array_n[1] = x[i];
        } else if (i == 4){
            array_n[0] = x[i];
        }
    }
    for(int i = 0; i < sizeof(x)/sizeof(int); i++){
        printf("array n[%d]= %d\n", i, array_n[i]);
    }
    return 0;
}