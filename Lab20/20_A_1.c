#include<stdio.h>

struct employee{
    char name[100];
    int empID;
    int salary;
};
struct employee e1,e2,e3;
int main(){
    struct employee e1={"Harry",112,40000};
    struct employee e2={"Shubham",193,67000};
    struct employee e3={"Riya",431,54000};
    return 0;
}
