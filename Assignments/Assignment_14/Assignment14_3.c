#include<stdio.h>
#include<stdlib.h>
void NonFact(int iNo)
{
  int iCnt = 0;
  for(iCnt = 1; iCnt <= iNo ; iCnt++)
  {
    if((iNo % iCnt) != 0)
    {
      printf("%d\t",iCnt);
    }
  }
}
int main()
{
  int iValue = 0;
  printf("Enter a number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  NonFact(iValue);

  return EXIT_SUCCESS;
}