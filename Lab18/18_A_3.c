#include<stdio.h>
int simple_interest(int p,int r,int t){
    int m;
    m=(p*r*t)/100;
    return m;
}
int main(){
    int p,r,t,s;
    printf("enter principal amount: ");
    scanf("%d",&p);
    printf("enter rate of interest: ");
    scanf("%d",&r);
    printf("enter time: ");
    scanf("%d",&t);
    s=simple_interest(p,r,t);
    printf("the simple interest is %d",s);
    return 0;
}