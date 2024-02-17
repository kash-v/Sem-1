//fgetc  //fgets
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","r");
    if(fp==NULL){
        printf("error");
        exit(1);
    }
    char ch = fgetc(fp);
    printf("%c\n",ch);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    printf("\n");
    char str[10];
    fgets(str,5,fp);
    printf("%s\n",str);
    
    while(!feof(fp))
    {
        fgets(str,3,fp);
        printf("%s",str);
    }

    fclose(fp);
    return 0;
}