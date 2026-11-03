#include<stdio.h>
#include<stdlib.h>
int RangeSumEven(int iStart , int iEnd)
{
  int iCnt = 0, iSum = 0;

  for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
  {
    if((iCnt % 2) == 0)
    {
      iSum = iSum + iCnt;
    }
  }
  return iSum;
}
int main()
{
  int iValue1 = 0, iValue2 = 0, iRet = 0;
  printf("Enter Starting Point : ");
  if(scanf("%d",&iValue1) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  }

  printf("Enter Ending Point : ");
  if(scanf("%d",&iValue2) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  }
  if(iValue1 > iValue2 || iValue1 < 0 || iValue2 < 0)
  {
    printf("Invalid Range!!");
    return EXIT_FAILURE;
  }

  iRet = RangeSumEven(iValue1, iValue2);
  printf("Sum of even range is : %d",iRet);
  return EXIT_SUCCESS;
}