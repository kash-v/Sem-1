#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL,*ptr=NULL,*ptr1=NULL;
    fp=fopen("file3.txt","r");
    ptr=fopen("odd.txt","w");
    ptr1=fopen("even.txt","w");
    if(fp==NULL || ptr==NULL || ptr1==NULL)
    {
        printf("error");
        exit(1);
    }
    int n;
    while(fscanf(fp,"%d",&n)==1)
    //while(!feof(fp))
    {
        fscanf(fp,"%d",&n);
        if(n%2==0)
        {
            fprintf(ptr1,"%d",n);
            fprintf(ptr1,"%s",'\n');
        }else
        {
            fprintf(ptr,"%d",n);
            fprintf(ptr,"%s",'\n');
        }
    }
    fclose(fp);
    fclose(ptr);
    fclose(ptr1);
    return 0;
}