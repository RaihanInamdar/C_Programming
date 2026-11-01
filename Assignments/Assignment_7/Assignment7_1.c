#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo){
  int iCnt = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("$\t*\t");
    
  }
}
int main()
{
  int iValue = 0;
  printf("Enter a number: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid input!!!!");
    return EXIT_FAILURE;
  }

  Pattern(iValue);


  return EXIT_SUCCESS;
}