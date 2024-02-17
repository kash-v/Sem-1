#include<stdio.h>
struct student{
    char name[100];
    int cpi;
};
int main(){
    struct student s1,s2;
    scanf("%s",s1.name);
    scanf("%d",&s1.cpi);
    scanf("%s",s2.name);
    scanf("%d",&s2.cpi);

    printf("%s",s1.name);
    printf("%d",s1.cpi);
    printf("%s",s2.name);
    printf("%d",s2.cpi);
    return 0;
}