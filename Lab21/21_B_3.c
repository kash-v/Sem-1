#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL,*ptr=NULL,*file3=NULL;
    fp=fopen("myfile.txt","r");
    ptr=fopen("file.txt","r");
    file3=fopen("mergefile.txt","w");
    char c,ch;
    if(fp==NULL || ptr==NULL || file3==NULL)
    {
        printf("error");
        exit(1);
    }
    while( 1)
    {
        c=fgetc(fp);
        while(c!='\n')
        {
            if(c== EOF)
            {
                break;
            }
            fputc(c,file3);
            c=fgetc(fp);
        }
        ch=fgetc(ptr);
        while(ch!='\n')
        {
            if(ch==EOF)
            {
                break;
            }
            fputc(ch,file3);
            ch=fgetc(ptr);
        }
    }
    fclose(fp);
    fclose(ptr);
    fclose(file3);
    return 0;
}