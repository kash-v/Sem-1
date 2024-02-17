#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL, *ptr=NULL;
    ptr=fopen("myfile.txt","r");
    fp=fopen("abc.txt","a");
    char str[1000];
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    if(ptr==NULL)
    {
        printf("error");
        exit(1);
    }
    while(!feof(ptr))
    {
        fgets(str,5,ptr);
        fputs(str,fp);
    }
    printf("Successfully Appended");
    fclose(fp);
    fclose(ptr);
    return 0;
}