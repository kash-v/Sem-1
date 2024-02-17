#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b){
       if(a>c && b>c){
        printf("%d is the second largest number", b);
       }else if (a>c && c>b){
        printf("%d is the second largest number", c);
       }
       else if (c>a){
        printf("%d is the second largest number", a);
       }
    } 
    else if (b>a){
        if(b>c && a>c){
            printf("%d is the sencond largest number", a);
        }else if(b>c && c>a){
            printf("%d is the second largest number", c);
        }
        else if(c>b){
            printf("%d is the second largest number", b);
        }
        
    }
    return 0;
    
}