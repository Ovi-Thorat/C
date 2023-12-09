#include<stdio.h>
 int main()
 {

    enum color
    {
    RED=1, BLUE, WHITE
    };

     enum color choice;

     printf("1. RED   2. BLUE  3. WHITE");

     printf("\nEnter the choice from above colors : ");
     scanf("%d",&choice);
   
     switch(choice)
    {
     case RED:
        printf("RED color"); // ans = a + b;
        break;

    case BLUE:
        printf("BLUE color");
        break;

    case WHITE:
        printf("WHITE color");
        break;

    default :
        printf("You entered invalid choice");
    }
   
    return 0;
 }
