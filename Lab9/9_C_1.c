#include<stdio.h>
int main(){
    int n,a,b,sum=0;
    char num[10][6]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        n=n/10;
        sum=sum*10 +a;
    }
    while(sum!=0){
        b=sum%10;
        sum=sum/10;
        printf("%s ",num[b]);
        
    }
    return 0;
}    