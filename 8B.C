#include<stdio.h>
#include<conio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
  int arr[MAX_SIZE];
  int i, max, min, size;

  /* Input Size of The Array */
  printf("Enter Size of The Array:");
  scanf("%d", &size);

  /* Input Array Element */
  printf("Enter Element in the Array:");
  for(i=0; i<size; i++);
  {
    scanf("%d",&arr[i]);
  }
  /* Assume First Element as Maximum and Minimum */
  max=arr[0];
  min=arr[0];
  /*
  * Find Maximum and Minimum in all Array Elemnts.
  */
  for(i=1; i<size; i++)
  {
    /* If Current Element is Greater Than max */
    if(arr[i]>max)
    {
      max=arr[i];
    }
    /* If Current Element is Smaller Than min  */
    if(arr[i]<min)
    {
      min=arr[i];
    }
  }
  printf("Maximum Element = %d\n", max);
  printf("Minimum Element = %d", min);
  getch();
  return 0;
}