#include<stdio.h>
struct Student_record{
    char name[100];
    char branch[100];
    int total_marks;
};
int main(){
    struct Student_record s[10];
    for(int i=0;i<10;i++)
    {
        printf("enter details of Student %d: \n",i);
        scanf("%s",s[i].name);
        scanf("%s",s[i].branch);
        scanf("%d",s[i].total_marks);
    }
    printf("Details of Students are: \n");
    for(int i=0;i<10;i++)
    {
        printf("Name: %s\n",s[i].name);
        printf("Branch: %s\n",s[i].branch);
        printf("Total Marks: %s\n",s[i].total_marks);

    }
    return 0;
}