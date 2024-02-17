//pointer
#include<stdio.h>
int main(){
    int x=10;
    char y='A';
    int *p=&x;
    char *p1=&y;
    printf("%d\n",sizeof(p));
    printf("%d\n",*p1);
    printf("%d\n",p1);
    return 0;
}