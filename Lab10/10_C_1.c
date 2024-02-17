#include<stdio.h>
int main(){
    int n,a,count=0,sum=0,cpn,b,temp;
    float p;
    scanf("%d",&n);
    cpn=n;
    temp=n;
    while(n!=0){
        a=n%10;
        n=n/10;
        count++;
    }
    printf("count is: %d\n",count);
    while(cpn!=0){
      
        b=cpn%10;
        cpn=cpn/10;
        p=pow(b,count);
        sum=sum+ p;
    }
    printf("the sum is: %d\n",sum);
    if(sum==temp){
        printf("armstrong number");
    }else{
        printf("not a armstrong number");
    }
    return 0;
}