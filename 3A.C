#include<stdio.h>
#include<conio.h>
void main()
{
	int phy,chem,bio,math,comp;
	float per;

	/* Input marks of five subjects from user */
	printf("Enter Five Subjects Marks: ");
	scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);

	/* Calculate Percentage */
	per=(phy+chem+bio+math+comp)/5.0;

	printf("Percentage = %2f\n", per);

	/* Find Grade According To The Percentage */
	if(per>=90)
	{
	    printf("Grade A");
	}
	else if(per>=80)
	{
	    printf("Grade B");
	}
	else if(per>=70)
	{
	    printf("Grade C");
	}
	else if(per>=60)
	{
	    printf("Grade D");
	}
	else if(per>=50)
	{
	    printf("Grade E");
	}
	else
	{
	    printf("Grade F");
	}
	getch();
	return 0;
}