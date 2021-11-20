#include <stdio.h>

int main(int argc, char* argv[]){
    float sum = 1.0;
    float j = 3.0;
    for(int i = 2; i <= 8; i*=2){
        sum += j/i;
        j += 2;
    }
    printf("%.2f\n", sum);
    return 0;
}