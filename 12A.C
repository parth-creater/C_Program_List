#include<stdio.h>

void main()
{
 FILE *fptr;
 char name[20]; int age;
 float salary;

 /* open for writing  */
 fptr=fopen("emp.rec","w");

 if(fptr==NULL)
 {
   printf("File Does Not Exist \n");
   return;
 }
 printf("Enter The Name \n");
 scanf("%s",name);
 fprintf(fptr,"Name = %s\n",name);
 printf("Enter the age\n");
 scanf("%d",&age);
 fprintf(fptr,"Age = %s\n",age);
 printf("Enter the Salary\n");
 scanf("%d",&age);
 fprintf(fptr,"Name = %s\n",salary);
 fprint(fptr,"Salary = %2f\n",salary);
fclose(fptr);
}