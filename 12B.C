#include<stdio.h>
#include<conio.h>

int main(int argc, char*argv[])
{
 int i;
 if(argc>=2)
 {
  printf("The Arguments Supplied Are: \n");
  for(i=1; i<argv; i++)
  {
    printf("%s\t",argv[i]);
  }
 }
 else
 {
   printf("Argument List is Empty.\n");
 }
}