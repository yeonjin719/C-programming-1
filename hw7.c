#include <stdio.h>
int main(){
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[6] = {7,8,9,10,11,12};
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int swap;
    printf("arr1: ");
    for (int i=0; i<6; i++){
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i=0; i<6; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n\nafter swap\n");
    for (int i=0; i<6; i++){
        swap = ptr1[i];
        ptr1[i] = arr2[i];
        ptr2[i] = swap;
    }
    printf("arr1: ");
    for (int i=0; i<6; i++){
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i=0; i<6; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}