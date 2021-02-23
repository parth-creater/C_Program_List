#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	clrscr();
	printf("Enter an integer:");
	scanf("%d", &number);

	//True if the number is perfectly divisible by 2
	if(number%2==0)
	    printf("%d is Even", number);
	else
	    printf("%d is Odd", number);
	getch();
	return 0;
}