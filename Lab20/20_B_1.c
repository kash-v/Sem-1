#include<stdio.h>
struct student{
    char name[100];
    int age;
    int id;
    char gender[100];
    char city[100];
};
struct student s1,s2,*ptr1,*ptr2;
int main(){
    ptr1=&s1;
    ptr2=&s2;
    printf("enter the details of student 1:-\n");
    printf("enter name: ");
    scanf("%s",&ptr1->name);
    printf("enter age: ");
    scanf("%d",&ptr1->age);
    printf("enter id: ");
    scanf("%d",&ptr1->id);
    printf("enter gender: ");
    scanf("%s",&ptr1->gender);
    printf("enter city: ");
    scanf("%s",&ptr1->city);

    printf("enter the details of student 2:-\n");
    printf("enter name: ");
    scanf("%s",&ptr2->name);
    printf("enter age: ");
    scanf("%d",&ptr2->age);
    printf("enter id: ");
    scanf("%d",&ptr2->id);
    printf("enter gender: ");
    scanf("%s",&ptr2->gender);
    printf("enter city: ");
    scanf("%s",&ptr2->city);
    
    printf("details of student 1 is: \n");
    printf("Name:%s\n",ptr1->name);
    printf("Age:%d\n",ptr1->age);
    printf("Id:%d\n",ptr1->id);
    printf("Gender:%s\n",ptr1->gender);
    printf("City:%s\n",ptr1->city);

    printf("details of student 2 is: \n");
    printf("Name:%s\n",ptr2->name);
    printf("Age:%d\n",ptr2->age);
    printf("Id:%d\n",ptr2->id);
    printf("Gender:%s\n",ptr2->gender);
    printf("City:%s\n",ptr2->city);

    return 0;
}