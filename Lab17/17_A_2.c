#include<stdio.h>
int main(){
    int a=10;
    int*p=&a;
    float b=1.413;
    float*p1=&b;
    double c=9.10283838;
    double*p2=&c;
    char d='C';
    char*p3=&d;
    printf("integer value is: %d\n",*p);
    printf("integer address is: %p\n",p);
    printf("float value is: %f\n",*p1);
    printf("float address is: %p\n",p1);
    printf("double value is: %lf\n",*p2);
    printf("double address is: %p\n",p2);
    printf("char value is: %c\n",*p3);
    printf("char address is: %p\n",p3);
    return 0;
}