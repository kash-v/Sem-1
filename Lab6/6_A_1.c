#include<stdio.h>
int main(){
    int a,b,c;
    char op;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter operator: ");
    scanf("%c", op);
    printf("enter a number: ");
    scanf("%d", &b);
    if(op == '+'){
        c=a+b;
        printf("the answer is %d", c);
    } if(op == '-'){
        c=a-b;
        printf("the answer is %d", c);
    } if(op == '*'){
        c=a*b;
        printf("the answer is %d", c);
    }if(op == '/'){
        c=a/b;
        printf("the answer is %d", c);
    } if(op == '%'){
        c=a%b;
        printf("the answer is %d", c);
    } else {
        printf("invalid operator");
    }
    return 0;
}