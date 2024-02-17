//cannot assign values inside the struct ,it will throw an compilation error
//using dot operator
#include<stdio.h>
struct Student{
    int rollno;
    int backlog;
};
int main(){
    struct Student s1;
    printf("enter rollno: ");
    scanf("%d",&s1.rollno);
    printf("enter number of backlog: ");
    scanf("%d",&s1.backlog);
    
    printf("%d\n",s1.rollno);
    printf("%d\n",s1.backlog);
    return 0;
}