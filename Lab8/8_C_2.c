#include<stdio.h>
int main(){
    int n,i=1, sum=0, sq;
    scanf("%d",&n);
    while(i<=n){
        sq=i*i;
        sum=sum+sq;
        i++;
    }
    printf("the sum is: %d", sum);
    return 0;
}
