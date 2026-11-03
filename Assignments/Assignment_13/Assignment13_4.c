#include<stdio.h>
#include<stdlib.h>
int MultDigits(int iNo)
{
  int iDigits = 0, iMul= 0;
  iMul= 1;
  while(iNo !=  0)
  {
    iDigits = iNo % 10;
    if(iDigits != 0)
    {
      iMul = iDigits * iMul;
    }
    iNo = iNo / 10;
  }
  return iMul;
  
}
int main()
{
  int iValue = 0,iRet = 0;
  printf("Enter a number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  }
  iRet = MultDigits(iValue);
  printf("Multiplication of digits are : %d",iRet);
  return EXIT_SUCCESS;

}