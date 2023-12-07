#include<stdio.h>
 int main()
 {
    int a, b;

    printf("enter two numbers :\n");
    scanf("%d%d", &a, &b);

    printf("before swapping");
    printf("a = %d  ", a);
    printf("b = %d  ", b);

    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("after swapping");
    printf("a = %d  ", a);
    printf("b = %d  ", b);

    return 0;

 }
