#include<stdio.h>
#include<stdlib.h>
float Percentage(int iNo1 , int iNo2)
{
  float fPer = 0.0f;
  fPer = (((float)iNo2/(float)iNo1) * 100);
  return fPer;
}
int main()
{
  int iValue1 = 0 , iValue2 = 0;
  float fRet = 0.0f;

  printf("Enter Total Marks : ");
  if(scanf("%d",&iValue1) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }

  printf("Enter Obtained Marks : ");
  if(scanf("%d",&iValue2) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  if(iValue1 <=0 || iValue2 < 0 || iValue2 > iValue1)
  {
    printf("Invalid input!!");
    return EXIT_FAILURE;
  }

  fRet = Percentage(iValue1, iValue2);
  printf("Your Percentage is : %.2f%%",fRet);

  return EXIT_SUCCESS;
}