#include<stdio.h>
#include<stdlib.h>
int Multiply(int iNo1 , int iNo2 , int iNo3)
{
  int iMul = 0;
  iMul = 1;

  if(iNo1 != 0)
  {
    iMul = iMul * iNo1 ;
  }
  if(iNo2 != 0)
  {
    iMul = iMul *iNo2;
  }
  if(iNo3 != 0)
  {
    iMul = iMul * iNo3;
  }
  
  return iMul;
}
int main()
{
  int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
  printf("Enter first Number : ");
  if(scanf("%d",&iValue1) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }

  printf("Enter second Number : ");
  if(scanf("%d",&iValue2) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }

  printf("Enter third Number : ");
  if(scanf("%d",&iValue3) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }

  iRet = Multiply(iValue1 , iValue2 , iValue3);
  printf("Multiplication of numbers is : %d",iRet);
  return EXIT_SUCCESS;
}