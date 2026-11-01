#include<stdio.h>
#include<stdlib.h>
void Number(int iNo)
{
  if(iNo <= 50)
  {
    printf("SMALL");
  }
  else if(iNo>50 && iNo<=100)
  {
    printf("MEDIUM");
  }
  else
  {
    printf("LARGE");
  }
}
int main()
{
  int iValue = 0;
  printf("Enter a number : \n");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  }
  Number(iValue);

  return EXIT_SUCCESS;
}