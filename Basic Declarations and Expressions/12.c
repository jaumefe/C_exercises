#include <stdio.h>

int main(int argc, char** argv[]){
    float hours, salary_hour;
    char ID[10];
    printf("Please introduce your ID\n");
    scanf("%s", &ID);
    printf("Input the working hours: \n");
    scanf("%f", &hours);
    printf("Salary per hour: \n");
    scanf("%f", &salary_hour);
    printf("Employee ID: %s\n", ID);
    printf("Salary = U$ %.2f\n", hours*salary_hour);
    return 0;
}