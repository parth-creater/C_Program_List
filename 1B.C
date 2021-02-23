#include<stdio.h>
#include<conio.h>
void main()
{
	int p,n,r,si;
	clrscr();
	printf("Enter Principal, Rate of Intrest& Time:");
	scanf("%d %d %d", &p,&r,&n);
	si=(p*r*n)/100;
	printf("Simple Intrest is: %d",si);
	getch();
	return 0;
}