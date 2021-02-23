#include<stdio.h>
#include<conio.h>
void main()
{
    int num, count,sum=0;
    clrscr();
    printf("Enter a Positive Integer: ");
    scanf("%d", &num);

    //for loop terminates when n is less tha count
    for(count=1; count<=num; ++count)
    {
      sum+=count;
    }
    printf("Sum=%d",sum);
    getch();
    return 0;
}