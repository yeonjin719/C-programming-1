#include <stdio.h>
#include <string.h>
struct citiesInfo {
    char name[30];
    char country[40];
    char population[100];
};
void RemoveBSN(char str[]){
    int len = strlen(str);
    str[len-1] = 0;
}
int main(){
    struct citiesInfo arr[3];
    printf("Input three cities:\n");
    for (int i=0; i<3; i++){
        printf("Name > ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        RemoveBSN(arr[i].name);
        printf("Country > ");
        fgets(arr[i].country, sizeof(arr[i].country), stdin);
        RemoveBSN(arr[i].country);
        printf("Population > ");
        fgets(arr[i].population, sizeof(arr[i].population), stdin);
        RemoveBSN(arr[i].population);
    }
    printf("Printing the three cities:\n");
    for (int i=0; i<3; i++){
        printf("%d. %s in %s with a population of %s people\n", i+1, arr[i].name,arr[i].country,arr[i].population);
    }


}