#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fNo )
{
  if(fNo>100 || fNo<0)
  {
    printf("Invalid input!!!\n");
  }
  else if(fNo<=100 && fNo>=90)
  {
    printf("Grade A\n");
  }
  else if(fNo<=89 && fNo>=75)
  {
    printf("Grade B\n ");
  }
  else if(fNo<=74 && fNo>=60)
  {
    printf("Grade C\n");
  }
  else if(fNo<=59 && fNo>=40)
  {
    printf("Grade D\n");
  }
  else
  {
    printf("Fail\n");
  }
}

int main()
{
  float iValue = 0.0f;

  printf("Enter Marks: ");
  if(scanf("%f",&iValue) != 1)
  {
    printf("Invalid Input !!");
    return EXIT_FAILURE;
  }

  DisplayGrade(iValue);

  return EXIT_SUCCESS;
}