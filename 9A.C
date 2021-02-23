#include<stdio.h>
#include<conio.h>

long factorial(int);

int main()
{
int number;
long fact=1;

printf("Enter a Number To Calculate its Factorial\n");
scanf("%d"&number);

printf("%d!=%1d\n", number, factorial(number));

return 0;
}
long factorial(int n)
{
 int c;
 long result=1;

 for(c=1;c<=n; c++)
 result=result*c;

 return result;
}