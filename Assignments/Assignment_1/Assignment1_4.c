//accept one number from user and check wheather number is divisible by 5 or not
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
  if((iNo % 5)==0)
  {
    return TRUE;
  }
  else{
    return FALSE;
  }
}

int main()
{
  int iValue = 0;
  BOOL bRet = FALSE;

  printf("Enter number: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input !!!");
  }

  bRet = Check(iValue);

  if(bRet == TRUE)
  {
    printf("Number is Divisible by 5 ");
  }
  else
  {
    printf("Number is not Divisible by 5 ");
  }

  return EXIT_SUCCESS;
}