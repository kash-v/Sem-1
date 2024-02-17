#include<stdio.h>
struct Car{
    char car_name[100];
    float milage;
    int price;
};
int main(){
    struct Car c1[5];
    for(int i=0;i<5;i++){
        scanf("%s",c1[i].car_name);
        scanf("%f",&c1[i].milage);
        scanf("%d",&c1[i].price);   
    }
    
    for(int i=0;i<5;i++){
        if(c1[i].price > 10000){
            printf("%s",c1[i].car_name);
            printf("%f",c1[i].milage);
        }
    }
    return 0;
}