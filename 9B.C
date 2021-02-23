#include<stdio.h>
#include<conio.h>
    long factorial(int);

int main()
{
  int n;
  long f;

  printf("Enter an Integer To Find Its Factorial\n");
  scanf("%d",&n);

  if(n<0)
     printf("Facorial of Negative Integers isn't Defined.\n");
  else{
     f=factorial(n);
     printf("%d!=%1d\n",n,f);
  }
  return 0;
  }
  long factorial(int n)
  {
   if (n==0)
    return 1;
   else
    return(n*factorial(n-1));
  }
