#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	int op;
	clrscr();
	printf("1,Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	printf("Enter the Value of a & b:");
	scanf("%d%d", &a, &b);
	printf("Enter Your Choice:");
	scanf("%d", &op);
	switch(op)
	{
	case 1
		printf("Sum of %d and %d is: %d",a,b,a+b);
		break;
	case 2
		printf("Difference of %d and %d is: %d",a,b,a-b);
		break;
	case 3
		printf("Multiplication of %d and %d is: %d",a,b,a*b);
		break;
	case 4
		printf("Division of %d and %d is: %d",a,b,a/b);
		break;
	default
		printf("Enter Your Correct Choice.");
		break;
	}

	getch();
	return 0;
}