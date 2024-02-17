#include<stdio.h>
void num_in_words(int num){
    char arr[10][6]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int a,sum=0,b;
    while(num!=0){
        a=num%10;
        num=num/10;
        sum=sum*10 +a;
    }
    while(sum!=0){
        b=sum%10;
        sum=sum/10;
        printf("%s ",arr[b]);
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    num_in_words(n);
    return 0;
}