include <stdio.h>
int main()
{
  
    int num1, num2, modulo;
    
    printf(" enter the first value : ");
    scanf(" %d", &num1);

    printf(" enter the second value : ");
    scanf("%d", &num2);

    modulo = num1 % num2;
    printf(" enter the total value of modulo : %d", modulo);


    return 0;
}
