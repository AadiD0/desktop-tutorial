// Question 1. Write a program to check whether a number is Armstrong number or not.
// Ans 1.
#include <stdio.h>
#include <math.h>
void main()
{
    int number , originalNumber , remainder, result = 0 , n = 0;
    printf("Enter a number : ");
    scanf("%d", &number);
    originalNumber = number;
    // Find the number of digits
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        n++;
    }
    // Calculate sum of each digit raised to the power of number of digits
    while(originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        number /= 10;
    }
    if (result == number)
    {
        printf("%d is an Armstrong number", n);
    }
    else
    {
        printf("%d is not an Armstrong number", n);
    }
}


// Question 2. Write a program t print sum of digits of a number.
// Ans 2.
#include <stdio.h>
int main()
{
    int number, sum = 0, remainder;
    printf("Enter the number : ");
    scanf("%d", &number);
    do{
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    } while (number != 0);
    
    printf("Sum of digits = %d", sum);
    return 0;
}


// Question 3. Write a program to check whether a number is prime or not.
// Ans 3.
#include <stdio.h>
int main()
{
    int number, isPrime = 1;
    printf("Enter a number : ");
    scanf("%d", &number);
    // Case for numbers less than 2
    if (number <= 2)
    {
        printf("%d is not a prime number \n", number);
        return 0;
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("%d is a prime number", number);
    }
    else
    {
        printf("%d is not a prime number", number);
    }
    return 0;
}


// Question 4. Write a program to print sum of positive numbers with break and continue statements.
// Ans 4.
#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf(" Mention the numbers (Enter 0 to stop) : ");
    while (1)
    {
        printf("Enter a number : ") ;
        scanf("%d", &number);
        if (number == 0)
        {
            break;;
        }
        if (number < 0)
        {
            printf("Negative numbers entered skipping..... \n");
            continue;
        }
        sum += number;     // Add the positive numbers only
    }
    printf("Sum = %d", sum);
    return 0;
}