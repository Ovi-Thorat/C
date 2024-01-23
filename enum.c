#include<stdio.h>
int main()
{
    enum color{

    RED,WHITE,BLUE

    };
    enum color c1,c2, c3;
    printf("%d\n",RED);
    printf("%d\n", WHITE);
    printf("%d\n", BLUE);

    c1 = RED;
    printf("%d\n",c1);

    c1 = WHITE;
    printf("%d\n", c1);

    c1++;
    printf("%d\n", c1);

   // RED++; enum constant can not be directly modified 

   
    printf("%d  %d\n", sizeof(c1), sizeof(enum color));

    return 0;
}  
