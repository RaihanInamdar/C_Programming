#include<stdio.h>
#include<stdlib.h>
int Factorial(int iNo)
{
  int iCnt = 0, iFact = 0 ;
  for(iCnt = 1, iFact = 1; iCnt <= iNo ; iCnt++)
  {
    iFact = iCnt * iFact;
  }
  return iFact;

}
int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter a number : \n");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  }
  iRet = Factorial(iValue);
  printf("Factorial is : %d",iRet);
  return EXIT_SUCCESS;
}