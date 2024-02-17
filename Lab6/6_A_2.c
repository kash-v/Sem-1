#include<stdio.h>
int main(){
    float n, hra, da, allowance, gross_salary;
    printf("enter the basic salary: ");
    scanf("%f", &n);
    if (n >= 10000 && n<20000){ 
        allowance= (n*20)/100.0 + (n*80)/100.0;
    } else if (n >=20000 && n>10000){
        allowance= (n*25)/100.0 + (n*90)/100.0;
    } else if (n >= 30000){
        allowance= (n*30)/100.0 + (n*95)/100.0;
    }
    
    gross_salary= n + allowance;
    printf("the gross salary is %f", gross_salary);
    return 0;
}