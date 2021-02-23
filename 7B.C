#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,mat1[10][10], mat2[10][10], mat3[10][10];
  int row1,col1,row2,col2;

  printf("\nEnter The Number of Rows of Mat1 : ");
  scanf("%d", &row1);
  printf("\nEnter The Number of Cols of Mat1 : ");
  scanf("%d", &col1);

  printf("\nEnter The Number of Rows of Mat2 : ");
  scanf("%d", &row2);
  printf("\nEnter The Number of Rows of Mat2 : ");
  scanf("%d", &col2);

  //Accpect The Elements in Matrix 1
    for(i=0; i<row1; i++){
     for(j=0; j<col1; j++){
      printf("Enter The Elementa[%d][%d]:",i,j);
      scanf("%d", &mat1[i][j]);
     }
    }

  //Accpect The Elements in Matrix 2
    for(i=0; i<row2; i++){
     for(j=0; j<col2; j++){
      printf("Enter The Elementa[%d][%d]:",i,j);
      scanf("%d", &mat2[i][j]);
     }
    }

   //Addition of Two Matrics
   for (i=0; i<row1;i++)
    for (j=0; j<col1; j++){
      mat3[i][j]=mat1[i][j] + mat2[i][j];
    }
    //Print out The Resultant Matrix
    printf("\nThe Addition of Two Matrices is : \n");
    for(i=0; i<row1; i++){
     for(j=0; j<col1; j++){
      printf("%d\t", mat3[i][j]);
     }
     printf("\n");
    }
    getch();
    return 0;
}