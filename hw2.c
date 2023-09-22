#include <stdio.h>

double km;

int main(){
    printf("Please enter kilometers: ");
    scanf("%lf", &km);
    printf("%.1f km is equal to %.1f miles.", km, km/1.609);
    return 0;
}