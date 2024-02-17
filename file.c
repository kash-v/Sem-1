//fputc  //fputs  //fprintf
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","w");
    char ch='a';
    char str[100];
    int a=12;
    if(fp==NULL){
        printf("error");
        exit(1);
    }
    fputc(ch,fp);
    printf("enter a string: ");
    gets(str);
    fputs(str,fp);
    fprintf(fp,"%d %s %c",a,str,ch);
    fclose(fp);
    return 0;
}