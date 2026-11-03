#include<stdio.h>
#include<stdlib.h>
int CountOdd(int iNo)
{
  int iDigit = 0, iCount = 0;
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if(iDigit % 2 != 0)
    {
      iCount++;
    }
    iNo = iNo /10;
  }
  return iCount;
}
int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter a number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input !!");
    return EXIT_FAILURE;

  }

  iRet = CountOdd(iValue);
  printf("Number of odd digit in the number is : %d ",iRet);
  return EXIT_SUCCESS;
}