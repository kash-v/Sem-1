#include<stdio.h>
#include<stdlib.h>

struct Student{
    char name[100];
    int marks;
};
int main(){
   struct Student *ptr,*ptr1;
   ptr=(struct Student *)malloc(3* sizeof(struct Student));
   ptr1=(struct Student *)malloc(3* sizeof(struct Student));

   struct Student *p=ptr,*p1=ptr1;
printf("%p\n",ptr);
// printf("%p\n",ptr->name);



  
  for(int i=0;i<3;i++)
  {
      scanf(" %s", (ptr1+i)->name);
    scanf(" %d", &(ptr+i)->marks);
    
    // printf("name = %s\n",(ptr1+i)->name);
    // printf("marks = %d\n",(ptr+i)->marks);


  }
   for(int i=0;i<3;i++)
  {
    printf("name = %s\n",(p1+i)->name);
    printf("marks = %d\n",(p+i)->marks);
  }

  // printf("%d\n",(p+1)->marks);

// printf("%p\n",ptr->marks);
// printf("%d\n",(p+3)->marks);


// printf("\n");
// for(int i=0;i<3;i++)
// {
//   printf("%p\n",(p+i));

//   printf("%d\n",(p+i)->marks);
// }

// printf("\n");



//    for(int i=0;i<3;i++)
//   {
//     printf("%s",ptr->name);
// printf("%d\n",ptr->marks);
//   }






// printf("%p\n",ptr->name);
// printf("%p",ptr->marks);






  //  for (int i = 0; i <3; ++i) {
  //   printf("Enter subject and marks:\n");
  
  // }

  // printf("Displaying Information:\n");
  // for (int i = 0; i < 3; ++i) {
  //   printf("%s\t%d\n",(ptr+i)->subject, (ptr + i)->marks);
  // }

  free(ptr);

  return 0;
} 
