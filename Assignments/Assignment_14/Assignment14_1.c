#include<stdio.h>
#include<stdlib.h>
int MultFact(int iNo)
{
  int iCnt = 0, iFact = 0;
  for(iCnt = 1, iFact =1 ; iCnt <= iNo/2 ; iCnt++)
  {
    if((iNo % iCnt ) == 0)
    {
      iFact = iFact * iCnt;
    }
  }
  return iFact;
}
int main()
{
  int iValue = 0, iRet =0;
  printf("Enter a number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input !!!");
    return EXIT_FAILURE;
  }

  iRet= MultFact(iValue);
  printf("Multiplication of factors is : %d",iRet);


  return EXIT_SUCCESS;
}