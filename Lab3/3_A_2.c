#include<stdio.h>

int main(){
    int a,b,c;
    int x=0, y=0, z=0;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter a number: ");
    scanf("%d", &b);
    printf("enter a number: ");
    scanf("%d", &c);
    if (a>b){
        if (a>c && b>c){
            x=a;
            y=b;
            z=c;
        } if (a>c && c>b){
            x=a ;
            y=c ;
            z=b ;
        } if (c>a){
            x=c;
            y=a;
            z=b;
        }   
    } else if (b>a){
        if (b>c && a>c){
            x=b;
            y=a;
            z=c;
        } if (c>a && b>c){
            x=b;
            y=c;
            z=a;
        } if (c>b){
            x=c;
            y=b;
            z=a;
        }
    }
    printf("Ascending order: %d, %d, %d", x, y, z);
    printf("Descending order: %d, %d, %d", z, y ,x);
    return 0; 
}
