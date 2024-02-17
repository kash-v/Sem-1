#include<stdio.h>
int main(){
    int a, b, c;
    char op;
    printf("enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("enter operation to be performed: ");
    scanf(" %c", &op);
    switch(op){
        case '+':
          c=a+b;
          printf("%d",c);
          break;
        case '-':
          c=a-b;
          printf("%d",c);
          break;
        case '*':
          c=a*b;
          printf("%d",c);
          break;
        case '/':
          c=a/b;
          printf("%d",c);
          break; 
        default:
          printf("Invalid operator");
          break;   
            
    }
    return 0;    
}