#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkEqual(int iNo1 , int iNo2)
{
  if(iNo1 == iNo2)
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
  int iValue1 = 0 , iValue2 =0 ;
  bool bRet = false;

  printf("Enter first number : ");
  if(scanf("%d",&iValue1) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }

  printf("Enter second number : ");
  if(scanf("%d",&iValue2) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  bRet = ChkEqual(iValue1 , iValue2);
  if(bRet == true)
  {
    printf("Equal");
  }
  else
  {
    printf("Not equal");
  }
  return EXIT_SUCCESS;
}