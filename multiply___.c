#include<stdio.h>
int main(){
    int a=0 , b, n, i=1;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("enter a number: ");
    scanf("%d", &b);
    //both positive
    if ( (n>0) && (b>0)){
        while (i<=b){
            a+=n;
            i=i+1;
        }
        printf("answer is %d", a);
    } 
    //zero
     else if ( n==0 || b==0 ){
        printf("answer is 0");
    }
    //both negative
    i=-1; 
    if((n<0 && b<0)){
        while (i>=b){
            a-=n;
            i=i-1;
        }
        printf("answer is %d", a);
    }
    //either of the number is negative
    i=1;
    if ( n<0 && b>0) {
        while (i<=b){
            a+=n;
            i=i+1;
        }
        printf("answer is %d", a);
    } 
    i=-1;
    if (n>0 && b<0){
        while (i>=b){
            a-=n;
            i=i-1;
        }
        printf("answer is %d", a); 
    }
    return 0;
}