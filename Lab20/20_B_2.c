#include<stdio.h>
#include<string.h>

struct Address{
    char area[100];
    char city[100];
    char state[100];
};
struct Student{
    int rollno;
    char name[100];
    struct Address a1;
};
int main(){
    struct Student s1;
    s1.rollno=110;
    strcpy(s1.name,"Harry");
    printf("enter the address: \n");
    scanf("%s",s1.a1.area);
    scanf("%s",s1.a1.city);
    scanf("%s",s1.a1.state);
    printf("Details of 1st student are: \n");
    printf("rollno is: %d\n",s1.rollno);
    printf("Name is: %s\n",s1.name);
    printf("Address is: %s%s%s",s1.a1.area,s1.a1.city,s1.a1.state);
    return 0;
}