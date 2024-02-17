#include<stdio.h>
int main(){
    int t;
    float C;
    printf("enter tempt in F: ");
    scanf("%d", &t);
    C=((t-32)*5)/9.0;
    printf("temperature in celius is: %f", C);
    return 0;
}