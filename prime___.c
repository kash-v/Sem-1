#include<stdio.h>
int main(){
    int a,b,p,i,j;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++){
        int p=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                p=1;
                break;
            }
        }if(p==0){
            printf("%d is prime\n",i);
        }
    }
    return 0;

}