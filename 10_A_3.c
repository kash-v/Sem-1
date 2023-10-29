#include<stdio.h>
int main(){
    int n,i=2,prime=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            prime++;
        }
        i++;
    }
    if(prime==0){
        printf("This number is Prime");
    }else{
        printf("This number is Not Prime");
    }
    return 0;
}