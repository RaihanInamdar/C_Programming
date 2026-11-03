#include<stdio.h>
#include<stdlib.h>
int CountDiff(int iNo)
{
  int iDigit = 0, iDiff = 0, iEvenSum = 0 , iOddSum = 0;
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if((iDigit % 2) == 0)
    {
      iEvenSum = iEvenSum + iDigit;
    }
    else
    {
      iOddSum = iOddSum + iDigit;
    }
    iNo = iNo / 10;
  }
  iDiff = iEvenSum - iOddSum;
  return iDiff; 
}
int main()
{
  int iValue = 0, iRet = 0;
  printf("Enter a number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  }

  iRet = CountDiff(iValue);
  printf("difference is : %d",iRet);

  return EXIT_SUCCESS;
}