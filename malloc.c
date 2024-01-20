// dynamic memory allocation by using malloc function

# include <stdio.h>
# include <stdlib.h>

int main()
{
    // this pointer will store the base address of a allocated memory block
    int * ptr;

    // to get the number of elements form the user
    int size;

    // to print the elements from an array
    int i;

    printf("Enter the size you want to allocate dynamically.\n");
    scanf("%d", &size); // 5

    printf("The size user declared to allocate memory is %d \n", size); //5

    // for dyanmic memory allocation by using malloc()
    ptr = (int*)malloc(size * sizeof(int));

    // check if the compiler has allocated the memory or not
    // if ptr is null that means the block is not allocated
    // and if ptr is not null (address) that means the memory has been allocated dynamically succesfully

    if(ptr == NULL)
    {
        printf("Memory is not allocated.");
        exit(0);
    }
    else{
        printf("Memory has been allocated successfully.");

         // take the elements from the user that he wants to store
         for(i=0; i<size; ++i)
         {
            ptr[i] = i+1;
         }

        for(i=0; i<size; ++i)
        {
            printf("%d \t", ptr[i]);
        }
    }
    return 0;
}
