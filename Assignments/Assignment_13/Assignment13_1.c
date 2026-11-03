#include<stdio.h>
#include<stdlib.h>
int CountEven(int iNo)
{
  int iDigit = 0 , iCount = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if(iDigit % 2  == 0)
    {
      iCount++;
    }
    iNo = iNo / 10;
  }
  return iCount;
}
int main()
{
  int iValue = 0,iRet = 0;
  printf("Enter a number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  }
  iRet = CountEven(iValue);
  printf("Number of even digits are : %d",iRet);

  return EXIT_SUCCESS;
}