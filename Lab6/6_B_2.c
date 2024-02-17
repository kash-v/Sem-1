#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,D;
    float x, y;
    printf("enter 1st term: ");
    scanf("%d", &a);
    printf("enter 2nd term: ");
    scanf("%d", &b);
    printf("enter 3rd term: ");
    scanf("%d", &c);
    printf("The algebric expression is %dx^2+%dx+%d \n", a, b, c);
    
    D=((b*b) - 4*a*c);
    if(D==0){
        x=-(b/(2.0 * a));
        printf("%d\n",D);
        printf("%d %d\n",a , b);
        printf("Both roots are equal to %f", x);
    } 
    else if(D>0){
        x=((-b) +(sqrt(D))/(2.0*a));
        y=((-b) -(sqrt(D))/(2.0*a)); 
        printf("the roots of the equation are %f and %f", x, y);
    } 
    else if (D<0){
        printf("The roots are imaginary");
    }
   
    return 0;
}