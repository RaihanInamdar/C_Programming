#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
  int iCnt = 0;
  for(iCnt = 1 ; iCnt <=iNo ; iCnt++)
  {
    printf("%d\t", iCnt);
  }
}

int main()
{
  int iValue = 0;
  printf("Enter number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid input!!!!");
    return EXIT_FAILURE;
  }

  Display(iValue);


  return EXIT_SUCCESS;
}