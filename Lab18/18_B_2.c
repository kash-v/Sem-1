#include<stdio.h>
#include<math.h>
int prime(int num){
    int p=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            p++;
        }
    }
    if(p==0){
        return 1;
    }else{
        return 0;
    }
}
int armstrong(int num){
    int cpn=num;
    int temp=num;
    int count=0,a,b,sum=0;
    float p;
    while(num!=0){
        a=num%10;
        num=num/10;
        count++;
    }
    while(cpn!=0){
      
        b=cpn%10;
        cpn=cpn/10;
        p=pow(b,count);
        sum=sum+ p;
    }
    if(sum==temp){
        return 1;
    }else{
        return 0;
    }
}
int perfect(int num){
    int i,sum=0;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        return 1;
    }else{
        return 0;
        }
}
int main(){
    int n;
    scanf("%d",&n);
    if(prime(n)){
        printf("%d is a prime number\n",n);
    }else{
        printf("%d is not a prime number\n",n);
    }
    if(armstrong(n)){
        printf("%d is a armstrong number\n",n);
    }else{
        printf("%d is not a armstrong number\n");
    }
    if(perfect(n)){
        printf("%d is a perfect number\n",n);
    }else{
        printf("%d is not a perfect number\n",n);
    }
    return 0;
}