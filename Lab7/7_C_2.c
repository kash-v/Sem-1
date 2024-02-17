#include<stdio.h>
int main(){
    int n,y;
    int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int Ldays[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    printf("enter month number: ");
    scanf("%d", &n);
    printf("enter year: ");
     scanf("%d", &y);
     if(y%4==0){
        printf("number of days in the month are %d", Ldays[n]);
    }else{
        printf("number of days in the month are %d", days[n]);
    }
    return 0;
}