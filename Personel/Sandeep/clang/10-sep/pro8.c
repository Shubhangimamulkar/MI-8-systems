#include <stdio.h>
#include <stdlib.h>
int main()
{
   int fno,sno,*ptr1=&fno,*ptr2=&sno;
   printf(" Input the first number : ");
   scanf("%d %d", ptr1,ptr2);

   if(*ptr1>*ptr2)
   {
        printf("\n\n %d is the maximum number.",*ptr1);
   }
   else
   {
        printf("\n\n %d is the maximum number.",*ptr2);
   }

}