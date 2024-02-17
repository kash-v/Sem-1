#include<stdio.h>
int main(){
    int n=1,sum=0,avg,count=0;
    char ch='y';
    while(ch=='y'){
        scanf("%d",&n);
        count++;
        sum=sum+n;
        avg=sum/count;
        printf("do you want to enter another number(y or n): ");
        scanf("%c",&ch);
        if(ch=='y'){
            continue;
        }else{
            break;
        }
    }
    printf("the sum and average of the numbers is %d and %d respectively",sum,avg);
    return 0;
}