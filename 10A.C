#include<stdio.h>
#include<conio.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};
int main()
{
  struct Books Book1; /* Declare Book1 of Type Book */
  struct Books Book2; /* Declare Book2 of Type Book */

  /* book 1 Specification  */
  strcpy(Book1.title,"C Programming");
  strcpy(Book1.author,"Buha Ali");
  strcpy(Book1.subject,"C Programming Tutorial");
  Book1.book_id=6495407;

  /* book 2 Specification  */
  strcpy(Book2.title,"Telecome Billing");
  strcpy(Book2.author,"Zara Ali");
  strcpy(Book2.subject,"Telecom Billing Tutorial");
  Book2.book_id=6495700;

  /* print Book1 info  */
  printf("Book 1 Title:%s\n", Book1.title);
  printf("Book 1 author:%s\n", Book1.author);
  printf("Book 1 subject:%s\n", Book1.subject);
  printf("Book 1 book_id:%s\n", Book1.book_id);

  /* print Book2 info  */
  printf("Book 2 Title:%s\n", Book2.title);
  printf("Book 2 author:%s\n", Book2.author);
  printf("Book 2 subject:%s\n", Book2.subject);
  printf("Book 2 book_id:%s\n", Book2.book_id);
return 0;

}