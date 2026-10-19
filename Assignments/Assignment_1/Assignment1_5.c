#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
  int iCnt = 0;
  for(iCnt = 1; iCnt <= iNo; iCnt ++)
  {
    printf("*\t");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter the number of times you what to display *: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input !!!");
  }

  Accept(iValue);

  return EXIT_SUCCESS;
}