#include<stdio.h>
int main()
{ int day;
     printf("Enter day numbe (1-7):");
     scanf("%d",&day);
   switch (day)
   { 
    case 1:
       printf("Monday");
       break;
    case 2:
       printf("Tuesday");
       break;
    case 3:
       printf("Wednesday");
       break;
    case 4:
       printf("Thurday");
       break;
    case 5:
       printf("Friday");
       break;
    case 6:
       printf("Saturday");
       break;
    case 7:
       printf("sunday");
       break;
   default:
      printf("In valid input please enter weak number between 1-7");
   }       

  return 0;

}