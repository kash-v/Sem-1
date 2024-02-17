#include<stdio.h>
int main(){
    char b[10]="Hello";
    char *ptr=b;
    printf("%d\n",ptr);
    printf("%s\n",ptr+1);
    printf("%s\n",*ptr);
    printf("%c\n",*ptr);
    return 0;
}