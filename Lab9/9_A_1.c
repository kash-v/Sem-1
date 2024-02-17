#include<stdio.h>
int main(){
    int i=1,n, sum=0,temp;
    scanf("%d", &n);
    while(i<=n){
        
        if(i%2==0){
            temp=(-i);
            sum=sum+temp;
        }else{
            sum=sum+i;
        }    
        i++;
    }
    printf("the sum of the series is: %d", sum);
    return 0;
}