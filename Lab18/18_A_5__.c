#include<stdio.h>
void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("value of a and b is %d and %d",*a,*b);
}
int main(){
    int a=5,b=10;
    swap(&a,&b);
    return 0;
}