#include<stdio.h>
int Printnum(int num,int a){
    if(a<=num){
        printf("%d ",a);
        Printnum(num, (a+1));
    }
}
int main(){
    int n;
    int a=1;
    scanf("%d",&n);
    Printnum(n,a);
    return 0;
}