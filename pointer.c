#include<stdio.h>
int main(){
    int a=6;
    int* ptra=&a ;
    printf("the value of a is %d\n", &a);
    printf("the value of a is %p\n", ptra);
    printf("the value of a is %p\n", *ptra);
    printf("the value of a is %d\n", *ptra);
    printf("the value of a is %d\n", ptra);
    printf("the value of a is %x\n", *ptra);

    return 0;

}