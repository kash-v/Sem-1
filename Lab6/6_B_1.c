#include<stdio.h>
int main(){
    float n,amt, total_amt;
    printf("Enter the units: ");
    scanf("%f", &n);
    if(n<=50){
        amt =n*0.5;
    } else if (n<=150){
        amt =25+(n-50)*0.75;
    } else if (n<=250){
        amt =100+(n-150)*1.20;
    } else if (n>=250){
        amt =220+(n-250)*1.5;
    }
    
    total_amt = amt+(amt*0.20);
    printf("total amount is: %f ", amt);
    return 0;
    
}