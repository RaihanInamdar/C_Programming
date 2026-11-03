#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
  if(iNo > 100)
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
  printf("Enter a number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  bRet = ChkGreater(iValue);
  if(bRet == true)
  {
    printf("Number is greater than 100\n");
  }
  else
  {
    printf("Number is small than 100\n");
  }

  return EXIT_SUCCESS;
}