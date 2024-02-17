#include<stdio.h>
int sum(int a,int b){
    return (a+b);
}
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=sum(a,b);
    printf("sum of the numbers is %d",c);
    return 0;

}