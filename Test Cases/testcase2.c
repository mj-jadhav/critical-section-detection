/*C Program for Structures and empty function definition*/
#include<stdio.h>


typedef struct node
{
  int data;
  struct node *next;
}node;


int foo()
{}

int main()
{
  struct node * head;
  static int var1 = 1;
  printf("\nWELCOME\n");
  return 0;
}
