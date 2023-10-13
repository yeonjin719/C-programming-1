#include <stdio.h>

int binary(int num){
    if (num != 0){
        binary(num/2);
    }
    if (num != 0){
        printf("%d", num%2);
    }
    return 0;
}

int main(){
    int num;
    int calculate;
    scanf("%d", &num);
    binary(num);
    return 0;
}