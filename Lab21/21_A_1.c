#include<stdio.h>
int main(){
    FILE *ptr=NULL;
    ptr=fopen("file.txt","w");
    fclose(ptr);
    return 0;
}