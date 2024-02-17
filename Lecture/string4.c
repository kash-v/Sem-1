#include<stdio.h>
int main(){
    char arr[1000];
    char num[1000];
    int i,count=0,count2=0;
    gets(arr);
    gets(num);
    for(i=0;arr[i]!='\0';i++){
        count++;
    }
    printf("%d\n",count);
    for(i=0;num[i]!='\0';i++){
        count2++;
    }
    printf("%d\n",count2);
    if(count>count2){
        printf("arr is greater string");
        
    }else{
        printf("num is greater string");
    }
    return 0;
}