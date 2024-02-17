#include<stdio.h>
int main(){
    FILE *fp=NULL;
    int a,sum=0;
    char arr[10];
    fp=fopen("file.txt","r");
    while(fscanf(fp,"%d %s",&a,arr)==1)
    {
        sum=sum+a;
    }
    printf("%d",sum);
    fclose(fp);
    return 0;
}