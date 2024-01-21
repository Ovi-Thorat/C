#include<stdio.h>
# include <string.h>
 int main()
 {
     char str3[5] = { 'i','n','f','o'};   // char array

    //  printf("%s", str3); // array name represents the base address // adrress

      char str2[5] = { 'a','b','c','d', '\0'}; 
      
    // to print a string by using for loop and put char 
    // 1st approach to print a string
    // for( int i= 0; str2[i] != '\0' ; i++)
    // {
    //     putchar(str2[i]); // u can also puts() and printf() to print a string
    // }
    
    // printf("\n");

    // 2nd approach to print a string
    // puts(str2);

    // 3rd approach to print a string
   // fputs(str2, 5, stdin); /// parameters - arrayname, size, filename

   // homework --> declare a string (char str4[] = "thorat")
   // and print by using printf, puts, putchar, fputs

    char str4[] = " i am going " ; // string -->

    for ( int i=0; i != '\0'; i++)
    {
      printf("%c", str4[i] );
    }

    printf("\n");

    puts(str4);

    printf("\n");

    fputs(str4, stdout);

    printf("\n");
    
    for( int i=0; i<'\0'; i++)
    {
      putchar(str4[i]);
    }
    
    return 0;
 }
