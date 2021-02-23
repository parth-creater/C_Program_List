#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,f;
    clrscr();
    printf("Enter a Number To Find Factorial:");
    scanf("%d",&n);
    while(i<=n)
    {
    f*=i;
    i++;
    }
    printf("The Facorial of %d is: %d",n,f);
    getch();
    return 0;
}
