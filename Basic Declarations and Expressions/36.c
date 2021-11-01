#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    char correct_pass[] = "1234";
    char pass[10];
    int ok = 0;
    printf("Introduce the correct password: \n");
    scanf("%s", &pass);
    for(int i = 0; i < sizeof(correct_pass)/sizeof(char); i++){
        if (correct_pass[i]==pass[i]){
            ok = 1;
        } else
            ok = 0;
            break;
    }
    if(ok){
        printf("Correct password\n");
    }
    else
        printf("Incorrect password\n");
    return 0;
}