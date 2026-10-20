#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
  if((iNo % 2) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter number: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid input !!");
    return EXIT_FAILURE;
  }

  bRet = CheckEvenOdd(iValue);

  if(bRet == true)
  {
    printf("Number is even");
  }
  else
  {
    printf("Number is odd");
  }
  return EXIT_SUCCESS;
}