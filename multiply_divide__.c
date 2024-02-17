#include<stdio.h>
int main(){
    int a, b, n, count;
    char op;
    printf("enter number: ");
    scanf("%d", &a);
    printf("enter operation: ");
    scanf(" %c", &op);
    printf("enter number: ");
    scanf("%d", &b);
    if (op =='*' ){
        b=a+a;
        printf("%d multilied by 2 is %d", a, b);
    } else if ( op == '/' ){
        while(n>0){
            n-=2;
            count+=1;
            if (n<=0){
                break;
            } else{
                continue;
            }
        }
        printf("%d divided by 2 is %d", a, count);
    }
    
    return 0;
}