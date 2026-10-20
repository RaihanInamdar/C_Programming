#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iNo)
{
  if(iNo >= 18)
  {
    printf("You are eligible for voting");
  }
  else
  {
    printf("You are not eligible for voting");
  }
}

int main()
{
  int iValue = 0;
  
  printf("Enter you Age: ");
  if(scanf("%d",&iValue) !=1 || (iValue<=0))
  {
    printf("Invalid input !!");
    return EXIT_FAILURE;
  }

  CheckVotingEligibility(iValue);

  return EXIT_SUCCESS;
}