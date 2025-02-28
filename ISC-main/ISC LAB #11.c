// Call by Value 
#include <stdio.h>
void increment(int n)
{
    (n)+=1 ;
    printf("Inside function (call by value) : %d \n", n);
}
int main()
{
    int value = 5;
    printf("Before function call : %d \n", value);
    increment(value);
    printf("After function call : %d \n", value);
    return 0;
}

// Call by Reference
#include <stdio.h>
void increment(int *n)
{
    (*n)+=1 ;
    printf("Inside function (call by reference) : %d \n", *n);
}
int main()
{
    int value = 5;
    printf("Before function call : %d \n", value);
    increment(&value);
    printf("After function call : %d \n", value);
    return 0;
}