#include<stdio.h>
int fibonacci(int num){
    if(num==0 || num==1){
        return num;
    }
    else{
        return (fibonacci(num-1)+fibonacci(num-2));
    }
}
int main(){
    int a=0,b=1,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",fibonacci(n));
        n++;
    }
    
    return 0;
}