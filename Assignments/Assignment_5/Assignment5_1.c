#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iNo1, int iNo2 , int iNo3)
{
  if(iNo1 >= iNo2 && iNo1 >= iNo3)
  {
    printf("%d is greater",iNo1);
  }
  else if(iNo2 >= iNo1 && iNo2 >= iNo3)
  {
    printf("%d is greater",iNo2);
  }
  else
  {
    printf("%d is greater",iNo3);
  }
}

int main()
{
  int iValue1 =0 , iValue2 =0, iValue3 =0;

  printf("Enter first number: ");
  if(scanf("%d",&iValue1) !=1 )
  {
    printf("Invalid !!");
    return EXIT_FAILURE;
  }

  printf("Enter Second number: ");
  if(scanf("%d",&iValue2) !=1 )
  {
    printf("Invalid !!");
    return EXIT_FAILURE;
  }

  printf("Enter third number: ");
  if(scanf("%d",&iValue3) !=1 )
  {
    printf("Invalid !!");
    return EXIT_FAILURE;
  }
FindGreatest(iValue1,iValue2,iValue3);

return EXIT_SUCCESS;
}