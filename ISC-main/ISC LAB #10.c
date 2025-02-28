// Write a program to print the fibonacci series using recursion for a given number of terms.
#include <stdio.h>
# define MAX 100
int fib[MAX];
int fibonacci(int n)
{
    if(fib[n] !=-1)
    {
        return fib[n];
    }
    if (n==0)
    return 0;
    else if (n==1)
    {
        return 1;
    }
    fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fib[n];
}
int main(){
    int n;
    for (int i=0 ; i<MAX ; i++)
    {
        fib[i] = -1;
    }
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("Fibonacci series %d terms: " , n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}