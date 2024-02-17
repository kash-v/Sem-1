#include<stdio.h>
struct Book{
    char book_title[100];
    char author[100];
    int publication;
    int price;
}b1,b2,b3;
int main(){
    printf("enter data of 1st book: \n");
    scanf("%s", b1.book_title);
    scanf("%s", b1.author);
    scanf("%d", &b1.publication);
    scanf("%d",&b1.price);
    printf("enter data of 2nd book: \n");
    scanf("%s", b2.book_title);
    scanf("%s", b2.author);
    scanf("%d", &b2.publication);
    scanf("%d",&b2.price);
    printf("enter data of 3rd book: \n");
    scanf("%s", b3.book_title);
    scanf("%s", b3.author);
    scanf("%d", &b3.publication);
    scanf("%d",&b3.price);
    printf("data of first book is:\n");
    printf("Title of the book is:%s\n",b1.book_title);
    printf("Name of the author is: %s\n",b1.author);
    printf("Publication date is: %d\n",b1.publication);
    printf("price of the book is: %d\n",b1.price);
    
    printf("Data of 2nd book is: \n");
    printf("Title of the book is:%s\n",b2.book_title);
    printf("Name of the author is: %s\n",b2.author);
    printf("Publication date is: %d\n",b2.publication);
    printf("price of the book is: %d\n",b2.price);

    printf("data of 3rd book is: \n");
    printf("Title of the book is:%s\n",b3.book_title);
    printf("Name of the author is: %s\n",b3.author);
    printf("Publication date is: %d\n",b3.publication);
    printf("price of the book is: %d\n",b2.price);
    return 0;
}