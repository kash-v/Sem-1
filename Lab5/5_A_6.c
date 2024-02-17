#include<stdio.h>
int main(){
    char c;
    printf("enter a character: ");
    scanf("%c", &c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("The given character %c is a vowel.", c);
    } 
    else {
        printf("The given character %c is a constant.", c);
    }
    return 0;
}
