#include<stdio.h>
#include<stdlib.h>
int Count(int iNo)
{
  int iDigit = 0, iCount = 0;
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if(iDigit < 6)
    {
      iCount++;
    }
    iNo = iNo / 10;
  }
  return iCount;
}
int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter a number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid input!!!");
    return EXIT_FAILURE;
  }
  iRet = Count(iValue);
  printf("Numbers less than 6 are : %d",iRet);
  return EXIT_SUCCESS;
}