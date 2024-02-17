//comtents will only be visible if the file is closed in write mode
#include<stdio.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("myfile.txt","r");
    if(fp==NULL)
    {
        printf("error");
    }

    char ch=getc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=getc(fp);
    }
    return 0;
}