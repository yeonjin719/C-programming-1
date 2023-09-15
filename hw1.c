#include <stdio.h>
int num1;
int num2;

int main(){
    printf("Input two integers:");
    scanf("%d %d", &num1, &num2);
    printf("%d&%d = %d\n", num1, num2, num1&num2);
    printf("%d|%d = %d\n", num1, num2, num1|num2);
    printf("%d^%d = %d\n", num1, num2, num1^num2);
}