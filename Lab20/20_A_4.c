#include<stdio.h>
struct Student{
    char name[100];
    float per;
    int age;
};

int main(){
    struct Student s1[5];

    int i;
    for(i=0;i<5;i++){
        scanf("%s",s1[i].name);
        scanf("%f",&s1[i].per);
        scanf("%d",&s1[i].age);
    }
    for(i=0;i<5;i++){
        printf("%s ",s1[i].name);
        printf("%f ",s1[i].per);
        printf("%d \n",s1[i].age);
    }
    return 0;
}