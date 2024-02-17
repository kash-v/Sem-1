#include<stdio.h>
int Printnum(int num,int a){
    if(a<=num){
        printf("%d ",a);
        Printnum(num, (a+1));
    }
}
int main(){
    int n;
    int a;
    scanf("%d",&n);
    scanf("%d",&a);
    if(n>a){
        Printnum(n,a);
    }else{
        Printnum(a,n);
    }
    return 0;
}