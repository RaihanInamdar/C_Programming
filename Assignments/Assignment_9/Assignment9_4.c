#include<stdio.h>
#include<stdlib.h>
int OddFactorial(int iNo)
{
  int iCnt = 0 , iFact = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt = 1 , iFact = 1; iCnt <=iNo; iCnt++)
  {
    if(iCnt % 2 != 0)
    {
      iFact = iFact * iCnt;
    }
  }
  return iFact;
}
int main()
{
  int iValue = 0, iRet = 0;
  printf("Enter a number: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  iRet = OddFactorial(iValue);
  printf("Odd Factorial is : %d",iRet);


  return EXIT_SUCCESS;
}