#include<stdio.h>
int main(){
    FILE *ptr=NULL;
    ptr=fopen("myfile.txt","r");
    char c;
    int nochar=0,nospace=0,non=0,not=0;
    if(ptr==NULL)
    {
        printf("error");
        exit(1);
    }
    while(!feof(ptr)){
        c=fgetc(ptr);
        nochar++;
        if(c== EOF){
            break;
        }else if(c==' '){
            nospace++;
        }else if(c=='\n'){
            non++;
        }else if(c=='\t'){
            not++;
        }
    } 
    printf("number of characters in the file is %d\n",nochar);   
    printf("number of spaces in the file is %d\n",nospace);                                         
    printf("number of new line character in the file is %d\n",non);   
    printf("number of tabs in the file is %d\n",not); 
    fclose(ptr);
    return 0;
}