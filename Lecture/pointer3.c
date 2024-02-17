//& is not added as array is always directly refered by its base address
#include<stdio.h>
int main(){
    int a[5]={10,20,17,9,8};
    int *ptr=a;
    ptr=a;
    ptr=ptr+2;
    printf("%d",ptr);
    return 0;
}