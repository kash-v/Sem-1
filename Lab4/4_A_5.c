#include<stdio.h>
int main(){
    int r;
    float area=0;
    printf("enter radius of circle: ");
    scanf("%d", &r);
    area= 3.14*r*r;
    printf("the area of the circle is: %f", area);
    return 0;
}