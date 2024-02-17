#include<stdio.h>
int main(){
    int x=10,y=20;
    int *p=&x;
    int *p1=&y;
    printf("%d\n",*p);
    printf("%d\n",*p+1);
    return 0;
}