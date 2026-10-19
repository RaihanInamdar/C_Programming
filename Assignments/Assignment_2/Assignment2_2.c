//accept one number from user and print thr number of * on  screen

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
  
  while(iNo>0)
  {
    printf("*\t");
    iNo--;
  }
}

int main()
{
  int iValue = 0;
  printf("Enter number: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input !!!");
  }

  Display(iValue);

  return EXIT_SUCCESS;
}