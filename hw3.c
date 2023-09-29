#include <stdio.h>
int main(void){
    int N;
    for (int i=1; i<=5; i++){
        for (int j=1; j<=5-i; j++){
            printf(" ");
        }
        for (int l=1; l<=2*i-1; l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}