#include <stdio.h>
#include <math.h>

double calculate(const int * ptr){
    int u = 0;
    double sum = 0;
    for (int i =0; i<5; i++){
        u += ptr[i];
    }
    double ave = u/5;
    for (int i =0; i<5; i++){
        sum +=  pow((ptr[i]-ave), 2);
    }
    double m = sum/5;
    double ans = sqrt(m);
    return ans;
}
int main(){
    int arr[5];
    printf("Enter 5 real numbers: ");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    int *ptr = &arr[0];
    printf("Standard Deviation = %.3f", calculate(ptr));
    return 0;
}