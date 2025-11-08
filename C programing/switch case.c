#include<stdio.h>

int main()
{ 
  int age;
  printf("Enter your age\n ");
  scanf("%d", &age);

  switch (age)
  {
  case 3: 
    printf("the age is 3");
    break;

  case 13: 
    printf("the age is 3");
    break;

  case 23: 
    printf("the age is 3");
    break;

  default:
   printf("Age is not 3,13 or 23");
    break;
  }
   return 0 ;
}