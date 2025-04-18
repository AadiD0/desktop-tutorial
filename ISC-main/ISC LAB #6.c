// Question 1. Write a program to find greater number among three numbers.
// Ans 1.
#include <stdio.h>

void main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Logic to find the greatest
    if (a >= b && a >= c) {
        printf("Greatest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Greatest number is: %d\n", b);
    } else {
        printf("Greatest number is: %d\n", c);
    }

    return 0;
}

// Question 2. Write a program to find whether the given year is a leap year or no.
// Ans 2.
#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Leap year");
            }
            else
            {
                printf("Not a leap year");
            }
        }
        else
        {
            printf("Leap year");
        }
    }
    else
    {
        printf("Not a leap year");
    }
    return 0;
}

// Question 3. Write a program to find if a number is negative, positive or zero.
// Ans 3.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Number is positive");
    }
    else if (n < 0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is zero");
    }
}
