#include <stdio.h>

int main(int argc, char* argv[]){
    float x, avg;
    float count, sum = 0;
    printf("Input Mathematics marks (0 to terminate):\n");
    while(1){
        scanf("%f", &x);
        if (x != 0){
            sum += x;
            count++;
        } else
            break;
    }
    avg = sum/count;
    printf("The average mark is: %.2f\n", avg);
}