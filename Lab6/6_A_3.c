#include<stdio.h>
int main(){
    char n;
    int temp;
    printf("enter a character: ");
    scanf("%c", &n);
    
    if(n>='A' && n<='Z'){
        printf("It is uppercase");
    } else if (n>='a' && n<='z'){
        printf("It is lowercase");
    } else if (n>='0' && n<='9'){
        printf("It is a digit");
    }
    return 0;
}