#include<stdio.h>
#include<stdlib.h>
void Pattern(int iNo)
{
  int iCnt ;
  for(iCnt = 1 ; iCnt <= iNo * 2 ; iCnt++)
  {
    if(iCnt % 2 == 0)
    {
      printf("%d\t",iCnt);
    }
  }
}
int main()
{
  int iValue = 0;
  printf("Enter number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  Pattern(iValue);

  return EXIT_SUCCESS;
}