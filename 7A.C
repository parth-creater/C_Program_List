#include<stdio.h>
int main()
{
int i,j,a[2][2];
clrscr();
for(i=0; i<2;i++)
  {
     for(j=0; j<2; j++)
       {
	 printf("\nEnter the Matrix");
	 scanf("%d", &a[i][j]);
       }
  }

  for (i=0; i<2; i++){
    for (j=0; j<2; j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  getch();
  return 0;
}