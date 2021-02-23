#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter a,b,c: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a>b && a>c){
	    printf("a is Greater Than b and c");
	}
	else if(b>c && b>c){
	    printf("b is Greater Than a and c");
	}
	else if(c>a && c>b){
	    printf("c is Greater than a and b");
	}
	else {
	    printf("all are Equal or any two values are equal");
	}
	getch();
	return 0;
}