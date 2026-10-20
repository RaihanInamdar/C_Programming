#include<stdio.h>
#include<stdlib.h>

int FindGreater(int iNo1, int iNo2)
{
  if(iNo1 > iNo2)
  {
    return iNo1;
  }
  else if(iNo2 > iNo1)
  {
    return iNo2;
  }
  else
  {
    return 0;
  }

}

int main()
{
  int iValue1 =0, iValue2 =0, iRet = 0;

  printf("Enter First number: ");
  if(scanf("%d",&iValue1) != 1)
  {
    printf("Invalid input !!");
    return EXIT_FAILURE;
  }

  printf("Enter Second number: ");
  if(scanf("%d",&iValue2) != 1)
  {
    printf("Invalid input !!");
    return EXIT_FAILURE;
  }
  if(iValue1 == iValue2 )
  {
    printf("Same");
  }
  else
  {
    iRet = FindGreater(iValue1, iValue2);
    printf("%d is greater",iRet);
  }
  return EXIT_SUCCESS;

}