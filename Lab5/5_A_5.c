#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter number: ");
    scanf("%f", &a);
    printf("enter number: ");
    scanf("%f", &b);
    printf("enter number: ");
    scanf("%f", &c);
    if(a>b && a>c){
        printf("%f is the largest number", a);
    } else if(b>a && b>c){
        printf("%f is the largest number",b);
    } else if (c>a && c>b){
        printf("%f is the largest number",c);
    }
    return 0;
}
