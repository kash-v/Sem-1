#include<stdio.h>
int prime(int num1,int num2){
    int i,j,p;
    for(i=num1+1;i<num2;i++){
        int p=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                p=1;
                break;
            }
        }if(p==0){
            printf("%d ",i);
        }
    }
}
int main(){
    int a,b;
    printf("enter interval of numbers: \n");
    scanf("%d %d",&a,&b);
    printf("prime numbers between %d and %d are: ",a,b);
    prime(a,b);
    return 0;
}