#include<stdio.h>
int main(){
    char n,a;
    printf("enter a character: ");
    scanf("%c", &n);
    a=((n>='A' && n<='z')?printf("Alphabet"):printf("not an alphabet"));
    return 0;
}