#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
  if(iNo == 0)
  {
    printf("Number is Zero ");
  }
  else if(iNo > 0)
  {
    printf("Number is Positive ");
  }
  else
  {
    printf("Number is negative ");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter a number: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid input !!");
    return EXIT_FAILURE;
  }

  CheckNumber(iValue);

  return EXIT_SUCCESS;
}