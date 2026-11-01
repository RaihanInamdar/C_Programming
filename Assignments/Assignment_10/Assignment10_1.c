#include<stdio.h>
#include<stdlib.h>
double CircleArea(float fRadius)
{
  float fArea = 0.0f;
  fArea = 3.14 * fRadius * fRadius;
  return fArea;
}
int main()
{
  float fValue = 0.0f;
  double dRet = 0.0;

  printf("Enter Radius : ");
  scanf("%f", &fValue);

  dRet = CircleArea(fValue);
  printf("Area is : %.4lf" , dRet);
  return EXIT_SUCCESS;
}