#include<stdio.h>
struct Date{
    int dd;
    int mm;
    int yy;
};
struct Employee{
    char name[100];
    struct Date d1;
    struct Date j1;
};
int main(){
    struct Employee e1;
    scanf("%s",e1.name);
    scanf("%d %d %d",&e1.d1.dd,&e1.d1.mm,&e1.d1.yy);
}
