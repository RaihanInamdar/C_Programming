#include<stdio.h>
#include<stdlib.h>
int FactDiff(int iNo)
{
  int iCnt = 0, iFactsum = 0, iNonFactSum = 0, iDiff = 0;
  for(iCnt = 1 ; iCnt < iNo ; iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      iFactsum = iFactsum + iCnt;
    }
    else 
    {
      iNonFactSum = iNonFactSum + iCnt;
    }
  }
  iDiff = iFactsum - iNonFactSum;
  return iDiff;
}
int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter a number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  iRet = FactDiff(iValue);
  printf("Difference is : %d", iRet);

  return EXIT_SUCCESS;
}