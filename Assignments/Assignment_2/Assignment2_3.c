//accept one number from user if number is less than 10 then print "hello" otherwise print "Demo"

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
  if(iNo < 10)
  {
    printf("Hello");
  }
  else
  {
    printf("Demo");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter the number: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input !!!");
  }

  Display(iValue);

  return EXIT_SUCCESS;
}
