#include<stdio.h>
#include<string.h>
char shipName(char a,char b){
    char c[100];
    int l=strlen(b);
    for(int i=0;i<2;i++){
        for(int j=l;j<(l-2);j--){
            c=a[i]
        }
    }
    printf("%s",c);
}
int main()
{ 
    char name1[100],name2[100];
    printf("Enter a name1:\n");
    scanf("%s",&name1);
    printf("Enter a name2:\n");
    scanf("%s",&name2);
    shipName(name1,name2);
    return 0;
}