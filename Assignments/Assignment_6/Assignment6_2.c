#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
  if ((fMarks<0 && fMarks>100) && iAge < 0)
  {
    printf("Invalid input !!\n");
  }
  else if (fMarks >= 60 && iAge >= 17)
  {
    printf("You are eligible for addmision\n ");
  }
  else{
    printf("You are not eligible\n");
  }
}

int main()
{
  float FMarks = 0.0f;
  int IAge = 0;

  printf("Enter your Age: ");
  if(scanf("%d",&IAge) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }

  printf("Enter your Marks: ");
  if(scanf("%f",&FMarks) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }


  CheckAdmission(FMarks , IAge);

  return EXIT_SUCCESS;
}