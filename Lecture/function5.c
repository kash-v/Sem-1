#include<stdio.h>
int isPrime(int num){
    int i=2,p=0;
    for(i=2;i<num;i++){
        if(num%i==0){
            p++;
        }
    }
    if(p>=1){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(isPrime(n)){
        printf("Prime number");
    }else{
        printf("Not a prime number");
    }
    return 0;
}