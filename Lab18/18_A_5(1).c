#include<stdio.h>
void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    // printf("value of a and b is %d and %d",a,b);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("value of a and b is %d and %d",a,b);
    return 0;
}