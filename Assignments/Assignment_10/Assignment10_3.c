#include<stdio.h>
#include<stdlib.h>
int KMtoMeter(int iNo)
{
  int iMeter;
  iMeter = iNo * 1000;
  return iMeter;
}
int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter kilometer : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input !!!");
    return EXIT_FAILURE;
  }
  iRet = KMtoMeter(iValue);
  printf("KM TO METER IS : %d",iRet);

  return EXIT_SUCCESS;
}