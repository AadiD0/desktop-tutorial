// Question 1. Write a program to find greater number among three numbers.
// Ans 1.
#include <stdio.h>
void main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && a == c) {
        printf("All are equal");
    }
    
    else if (a == b && a > c) {
        printf("%d and %d are greatest", a, b);
    }
    else if (b == c && b > a) {
        printf("%d and %d are greatest", b, c);
    }
    else if (c == a && c > b) {
        printf("%d and %d are greatest", c, a);
    }
    
    else if (a > b && a > c) {
        printf("%d is greatest", a);
    }
    else if (b > a && b > c) {
        printf("%d is greatest", b);
    }
    else {
        printf("%d is greatest", c);
    }
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
