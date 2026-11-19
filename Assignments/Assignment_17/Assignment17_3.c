#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow , int iCol)
{
  int i = 0 , j = 0;
  char ch = '\0';
  for(i = 1 ; i <= iRow ; i++)
  {
    for(j = 1 , ch = 'a'; j <= iCol ; j++ , ch++)
    {
      if((i % 2) == 0)
      {
        printf("%d\t",j);
      }
      else
      {
        printf("%c\t",ch);
      }
    }
    printf("\n\n");
  }

}
int main()
{
  int iValue1 = 0 , iValue2 = 0;
  printf("Enter a Number row : ");
  if((scanf("%d",&iValue1) != 1) || (iValue1 <= 0))
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  printf("Enter a Number column : ");
  if((scanf("%d",&iValue2) != 1) || (iValue2 <= 0))
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  Pattern(iValue1 , iValue2);

  return EXIT_SUCCESS;
}