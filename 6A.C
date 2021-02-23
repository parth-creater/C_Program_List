#include<stdio.h>
#include<conio.h>

int main ()
{
  int i,arr[50], num;
  clrscr();
  printf("\nEnter No. of Elements:");
  scanf("%d",&num);
  //Reading Values into Array
  printf("\nEnter The Values:");
  for(i=0; i<num; i++){
    scanf("%d", &arr[i]);
  }
  //printing of all elements of array
  for(i=0; i<num; i++){
    printf("\narr[%d]=%d",i,arr[i]);
  }
  getch();
  return (0);
}