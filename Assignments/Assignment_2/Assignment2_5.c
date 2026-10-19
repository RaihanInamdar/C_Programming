#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkeven(int iNo)
{
  if((iNo % 2)== 0)
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

  printf("Enter The number: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input !!!");
  }

  bRet = checkeven(iValue);

  if(bRet == true)
  {
    printf("Number is even ");
  }
  else
  {
    printf("Number is odd ");
  }

  return EXIT_SUCCESS;


}