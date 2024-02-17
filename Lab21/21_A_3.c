#include<stdio.h>
int main(){
    FILE *ptr=NULL;
    char str[100];
    if(ptr==NULL)
    {
        printf("error");
        exit(1);
    }
    ptr=fopen("myfile.txt","r");
    fscanf(ptr,"%s",str);
    printf("content of the file is %s\n",str);

    // ptr=fopen("myfile.txt","w");
    // char str1[100]="this file is made by me";
    // fprintf(ptr,"%s",str1);

    // ptr=fopen("myfile.txt","w");
    // fputc('o',ptr);

    // ptr=fopen("myfile.txt","r");
    // char str[100];
    // fgets(str,3,ptr);
    // printf("the string is %s\n", str);

    // ptr=fopen("myfile.txt","w");
    // char str[100];
    // printf("enter string: ");
    // gets(str);
    // fputs(str,ptr);
    // rewind(ptr);
    // while(!feof(ptr))
    // {
    //     fgets(str,5,ptr);
    //     printf("%s",str);
    // }

    fclose(ptr);
    return 0;
}