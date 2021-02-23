#include<stdio.h>
#include<conio.h>

int main()
{
 /* an array with 5 elements  */
 double balance[5]={1000.0,2.0,3.4,17.0,50.0};
 double *p;
 int i;

 p=balance;

 printf("Array Values Using Pointer\n");

 for (i=0; i<5; i++)
 {
  printf("*(p+%d): %f\n", i,*(p+i));
 }

 printf("Array Values Using Balance As Address\n");

 for (i=0; i<5; i++)
 {
  printf("*(balance+%d): %f\n",i * (balance+i));
 }
 getch();
 return 0;
}