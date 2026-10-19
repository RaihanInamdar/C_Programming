//program to print 5 to 1 numbers
#include<stdio.h>
#include<stdlib.h>

void Display()
{
  int iCnt = 0;
  
  iCnt = 5;
  while(iCnt>=1)
  {
    printf("%d\n",iCnt);
    iCnt--;
  }
}

int main()
{
  Display();

  return EXIT_SUCCESS;

}