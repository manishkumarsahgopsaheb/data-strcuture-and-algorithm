#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
 
    printf("enter the number of integers: ");
    scanf("%d", &n);

    // actually malloc means memory allocation, and it is used for dynamic memory allocation 
    // it takes one parameter as the size of memory you want,  suppose i want to store 5 integers then 
    // in that case memory size could be 5*(sizeof(int)) which will be equal to 20 as the size of  integer is 4

    // initially malloc store the garbage value in the memory before inserting any element

    printf("when we use the malloc then initailly it will store the garbage value in the memory: \n");

    int *ptr = (int *)malloc(n*sizeof(int));  

    // instead of this you can also do like
    // int *ptr;
    // ptr = (int *)malloc(n*sizeof(int)); 
    // btana ye chahte hai ki int *ptr likhne k bad tum 
    // pointer variable *ptr ko ptr k trh use kroge

    // if i will print ptr then it will return the memory address and if want the value store for this 
    // address then i can do it by printing *ptr 

    // printing memory address
    printf("memory address return by malloc is: %d\n", ptr);
    
    // initially malloc store the garbage value in the memory..lets print them

    printf("garbage value in the memory given by the malloc: %d\n", *ptr);

    printf("\n");

    if (ptr == NULL)
    {
        printf("Memory not available");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("enter an integer: ");
        scanf("%d", ptr + i);
        printf("%d stored at %d memory address\n", *(ptr + i), (ptr + i));

    }

    // now its our duty to release the memory and set ptr  to null 
    free(ptr);
    ptr = NULL;

    printf("now i have free the memory given by malloc function\n\n");

    int m;
    printf("enter the number of integers: ");
    scanf("%d", &m);

    // calloc means Clear Allocation
    printf("calloc does not store the garbage value in the memory initially it stores 0\n");

    int *ptr2 = (int *)calloc(m, sizeof(int));

    printf("memory address return by calloc is: %d\n", ptr2);

    printf("initially value store in the memory is: %d", *ptr2);


    printf("\n");

    if (ptr2 == NULL)
    {
        printf("Memory not available");
        exit(1);
    }
    for (int i = 0; i < m; i++)
    {
        printf("enter an integer: ");
        scanf("%d", ptr2 + i);
        printf("%d stored at %d memory address\n", *(ptr2 + i), (ptr2 + i));

    }

    // if further i want the more memory then i can use realloc for reallocation of 
    // memory and it keep track of previous memory that ptr2
    // now let me add  some  more integers

    printf("how many more integers you want to add: \n");
    int k;
    scanf("%d", &k);

    ptr2 = (int *)realloc(ptr2, (m + k)*sizeof(int));  // m more memory is allocated

    if(ptr2 ==NULL)
    {
        printf("Memory not available");
        exit(1);
    }

    printf("enter %d more integers: \n", k);

    for(int i=n;i<m+k;i++)
    {
        scanf("%d", (ptr2 + i));
        printf("%d stored at %d memory address\n", *(ptr2 + i), (ptr2 + i));
    }

    // and now let me free this memory because its our responsibility.
    free(ptr2);
    ptr2 = NULL;

    printf("i have free the memory given by calloc");

    return 0;
}