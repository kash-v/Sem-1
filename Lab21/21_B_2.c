#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp=NULL;
    fp=fopen("myfile.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    char ch[100];
    while(!feof(fp))
    {
        fscanf(fp,"%s",ch);
        if(ch[0]>='a' && ch[0]<='z')
        {
            ch[0]=ch[0]-32;
        }
        int l=strlen(ch);
        fseek(fp,l,SEEK_SET);
    }
    printf("Capitalized Successfully");
    fclose(fp);
    return 0;
}