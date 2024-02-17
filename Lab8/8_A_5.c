#include<stdio.h>
int main(){
    int i=1,n,countodd=0,counteven=0;
    while(i<=10){
        printf("enter number: ");
        scanf("%d",&n);
        if(n%2==0){
            counteven++;
        }else{
            countodd++;
        }
        i++;
    }
    printf("count of even number: %d",counteven);
    printf("count of odd number: %d",countodd);

    return 0;
}