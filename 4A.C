#include<stdio.h>
#include<conio.h>
int main()
{
  int number;
  long long factorial;

  printf("Enter an Integer: ");
  scanf("%d",&number);

  factorial = 1;

  //loop terminates when number is less than or equal to 0
  while (number>0)
  {
    factorial*=number;//factorial = factorial*number;
    --number;
  }
  printf("Factorial=%d", factorial);
  getch();
  return 0;
}