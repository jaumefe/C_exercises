#include <stdio.h>

int main(int argc, char* argv[]){
    float sum = 0;
    for(int i = 1; i <= 50; i++){
        sum += 1.0/i;
    }
    printf("%.2f\n", sum);
    return 0;
}