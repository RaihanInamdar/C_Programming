#include<stdio.h>
#include<stdlib.h>
long int FactorialDiff(int iNo)
{
  long int iFacteven = 0 , iFactodd = 0;
  int iCnt =0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt = 1 , iFacteven = 1 , iFactodd =1; iCnt <= iNo ; iCnt++)
  {
    if(iCnt % 2 == 0)
    {
      iFacteven = iFacteven * iCnt;
    }
    else
    {
      iFactodd = iFactodd * iCnt;
    }
    
  }
  return iFacteven - iFactodd ;
}
int main()
{
  int iValue = 0 ; 
  long int iRet = 0;
  printf("Enter a number: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  iRet = FactorialDiff(iValue);
  printf("Difference Between Even and Odd Factorial is : %ld", iRet);



  return EXIT_SUCCESS;
}