#include<stdio.h>
#include<stdlib.h>
int SumNonFact(int iNo)
{
  int iCnt = 0, iSum = 0;
  for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
  {
    if((iNo % iCnt) != 0)
    {
      iSum =iSum +iCnt;
    }
  }
  return iSum;
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
  iRet = SumNonFact(iValue);
  printf("Summation of non Factors is : %d",iRet); 

  return EXIT_SUCCESS;
}