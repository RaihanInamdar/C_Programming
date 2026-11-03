#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
  int iDigit = 0;
  while(iNo != 0 )
  {
    iDigit = iNo % 10;
    if(iDigit == 0)
    {
      return true;
    }
    iNo = iNo/10;
  }
  return false;
  

}
int main()
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter Number : ");
  scanf("%d", &iValue);

  bRet = ChkZero(iValue);

  if(bRet== true)
  {
    printf("It contains Zero");
  }
  else 
  {
    printf("It does not have zero");
  }

  return EXIT_SUCCESS;
}