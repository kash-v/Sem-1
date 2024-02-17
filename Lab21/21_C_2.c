#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("myfile.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fclose(fp);
    return 0;
}