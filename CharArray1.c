#include<stdio.h>
 int main()
 {
    char str1[5]= { 'A','B','C','D','E'};   //fully initialized char array

    char str2[5] = { 'i','n','f','o'};   // char array
    // to print str1 char array by using forloop 

    for( int i= 0; i<5 ; i++) 
    {
        printf(" %c", str1[i]);  
    } 

    printf("\n");

    // getchar () and putchar() are the functions to get the char value and out the char value of a char array 

    for( int i=0; i<5; i++)
    {
        putchar(str1[i]);  // in putchar function no need to give format specifier
    }

    // home work --> print elements of str2 by using printf() and putchar

    printf("\n");

    for ( int i=0; i<5; i++)
    {
        printf("%c", str2[i]);
    }
    printf("\n");

    for(  int i=0; i<5; i++) 
    {
    putchar(str2[i]);
    }
    
    return 0;
 }


 
