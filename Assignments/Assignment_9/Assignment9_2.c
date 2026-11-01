#include<stdio.h>
#include<stdlib.h>
int DollarToINR(int iNo)
{
  int iRUP = 0;
  iRUP = iNo * 70;
  return iRUP;
}
int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter number of USD : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  }

  iRet = DollarToINR(iValue);
  printf("In India rupees : %d",iRet);
  return EXIT_SUCCESS;
}