#include<stdio.h>
#include<conio.h>
void main()
{
char[a],char[b];
int i,j,n;
clrscr();

printf("Enter the Name:");
scanf("%s",&a);

for(i=strlen(a)-1; i>0; i--)
printf("%c\t",a[i]);

getch();
return 0;
}
