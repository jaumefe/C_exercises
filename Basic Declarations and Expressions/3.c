#include <stdio.h>

int main(int argc, char **argv){
    // print a F letter
    int F[7] = {6,1,1,5,1,1,1};
    for(int i = 0; i < sizeof(F)/sizeof(int); i++){
        for (int j = 0; j < F[i]; j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}