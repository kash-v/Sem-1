#include<stdio.h>
int main(){
    FILE *ptr=NULL;
    
    //*****Reading a file*****//
    char str[100];
    ptr=fopen("myfile.txt","r");
    fscanf(ptr,"%s",str);
    printf("content of the file is %s\n",str);
    
    //*****Writing in file*****//
    // ptr=fopen("myfile.txt","w");
    // char str[100]="this file is made by me";
    // fprintf(ptr,"%s",str);

    //*****Append in file*****//
    // ptr=fopen("myfile.txt","a");
    // char str[100]="this file is made by me";
    // fprintf(ptr,"%s",str);

    // ptr=fopen("myfile.txt","r");
    // char c=fgetc(ptr);
    // printf("the character i read was %c\n", c);

    // ptr=fopen("myfile.txt","r");
    // char str[100];
    // fgets(str,3,ptr);
    // printf("the string is %s\n", str);
    
    // ptr=fopen("myfile.txt","w");
    // fputc('o',ptr);
    // fputs("this is harry",ptr);

    return 0;
}