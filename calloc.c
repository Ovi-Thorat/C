#include<stdio.h>
#include<stdlib.h>
 int main()
 {

    int * ptr;  // to store the base address of an allocated block memory array
    int i;
    int t; // t is to traverse the array by using index(for loop)

    printf("enter the elements you want to enter:"); // i is for storing the no of elements entered by the user
    scanf("%d",&i);

    printf("enter the numbers by user is %d", i);

    ptr =(int*) calloc(i, sizeof (int));

    if (ptr==NULL)
    {
        printf("memory is not allocated /n");
        exit(0);
    }
    else {
        printf("memory is successdully allocated ");
    }
     for (t=0; t<i; ++t)
     {
     ptr[t]= t+1;
     }
     printf("print the elements of array:");

    for(t=0; t<i; t++)
    {
        printf("%d", ptr[t]);
    }

    return 0;

 }
