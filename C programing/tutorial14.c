#include<stdio.h>
int main()
{ int num;
     printf("Enter the integer:");
     scanf("%d", &num);
   if(num%2==0)
      printf("%d is a even", num);
   else
      printf("%d is odd",num);
  return 0;
   

}