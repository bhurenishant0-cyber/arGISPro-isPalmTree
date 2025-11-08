#include<stdio.h>
int main()
{ int a;
    printf("Enter the first variable a\n:");
    scanf("%d",&a);
    if(a%400==0 ||a %4==0 && a %100!=0)
        printf("%d is leap\n",a);
    else
        printf("%d is non-leap\n",a);
    
  return 0;


}