#include <stdio.h>
int main()
{
    int a;
    float b;

    a = 7/8;
    // RHS = int / int =int
    // LHS = int, result = int
    printf(" %d\n", a);

    b = 7.8f / 4;
    // RHS = float / int = float
    // LHS = float, result = float
    printf(" %f\n", b);

    a = 4 / 9.4f ;
    // RHS = int / float = float 
    // LHS = int, result = int
    printf(" %d\n", a);

    a = 2.7f / 7;
    //RHS = float / int = float
    //LHS = float, result = float
    printf(" %d\n",b);

    b = 9 / 9.2f;
    //RHS = int / float = float
    //LHS = int, result = int
    printf(" %f\n", b);

    b = 9.4f / 2.7f;
    //RHS = float / float = float
    //LHS = float, result = float
    printf(" %f\n", b);


    return 0;
}
