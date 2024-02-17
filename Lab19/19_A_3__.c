#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);

    printf("%d\n",strlen(s1));
    printf("%d\n",strlen(s2));
    if(strcmp(s1,s2)){
        printf("string are same\n");
    }else{
        printf("string are not same\n");
    }
    printf("copied string is %s\n",strcpy(s1,s2));
    printf("%s\n",strcat(s1,s2));
    printf("reversed string is %s\n",strrev(s1));
    printf("string in lowercase is %s\n",strlwr(s1));
    printf("string in uppercase is %s\n",strupr(s2));
    return 0;
}