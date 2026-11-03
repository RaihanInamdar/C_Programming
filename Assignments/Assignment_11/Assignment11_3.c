#include<stdio.h>
#include<stdlib.h>
int RangeSum(int iStart , int iEnd)
{
  int iCnt = 0 ,iSum = 0;
  for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
  {
    iSum = iSum + iCnt;

  }
  return iSum;
}
int main()
{
  int iValue1 = 0 , iValue2 = 0 , iRet = 0;
  printf("Enter starting point : ");
  if((scanf("%d",&iValue1) != 1) || iValue1 < 0)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  } 

  printf("Enter ending point : ");
  if((scanf("%d",&iValue2) != 1) || iValue2 < 0)
  {
    printf("Invalid Inpit!!!");
    return EXIT_FAILURE;
  } 
    if(iValue1 > iValue2)
  {
    printf("Invalid input!!!");
    return EXIT_FAILURE;
  }
  iRet = RangeSum(iValue1 , iValue2);
  printf("Sum of the Range is : %d",iRet);


  return EXIT_SUCCESS;
}