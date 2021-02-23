#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    clrscr();
    /* Input number of rows from use */
    printf("Enter Value of n:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
      /* Print i Numbers of Stars  */
      for(j=1; j<=i; j++)
      {
	printf("*");
      }
      /* Move To Next Line  */
      printf("\n");
    }
    getch();
    return 0;
}
