#include<stdio.h>
int main(){
    int a, b, c, d, e;
    float per;
    printf("enter marks obtained in maths: ");
    scanf("%d", &a);
    printf("enter marks obtained in english: ");
    scanf("%d", &b);
    printf("enter marks obtained in physics: ");
    scanf("%d", &c);
    printf("enter marks obtained in chemistry: ");
    scanf("%d", &d);
    printf("enter marks obtained in biology: ");
    scanf("%d", &e);
    
    per = ((a+b+c+d+e)/5.0);
    printf("the percentage obtained is: %f \n", per);
    
    if (per <= 35.0){
        printf("Failed");
    } else if (per >= 36.0 && per <= 45.0){
        printf("Pass Class");
    } else if (per >= 46.0 && per <= 60.0){
        printf("Second class");
    } else if (per >= 61.0 && per <= 70.0 ){
        printf("First class");
    } else if (per >= 70.0){
        printf("Distinction");
    } 
    
    return 0;
}