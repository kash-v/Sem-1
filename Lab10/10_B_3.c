#include<stdio.h>
int main(){
    int n,i=0,a,cpn;
    scanf("%d", &n);
    cpn=n;
    while(n!=0){
        a=n%10;
        n=n/10;
        i=i*10+a;
    }
    if(cpn==i){
        printf("it is a palindrome");
    }else{
        printf("it is not a palindrome");
    }
    return 0;
}