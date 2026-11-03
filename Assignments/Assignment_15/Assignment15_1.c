#include<stdio.h>
#include<stdlib.h>

int main()
{
  char Name[30];
  printf("Enter your name : \n");
  scanf("%[^'\n]s", Name);

  printf("Your Name is : %s",Name);
  return EXIT_SUCCESS;
}