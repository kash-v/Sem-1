#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp=NULL;
    fp=fopen("myfile.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    int l;
    fseek(fp,0,SEEK_END); 
    l=ftell(fp);  
    for(int i=1;i<=l;i++)
    {
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));
    }
    fclose(fp);
    return 0;
}