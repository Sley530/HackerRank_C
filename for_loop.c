#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
 * main- program entry point
 * 
 * Description: This program will print the number n that is
 * in the intervall of [a, b]
 * it will print the nuber in english letters if n is in
 * the intervall 1 <= n <= 9
 * Otherwise it will print if n is 'even' or 'odd'
 * 
 * Return: (0) if successful
 */

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	

    for (int n = a; n <= b; n++)
    {
        if (n >=1 && n <= 9)
        {
            if (n == 1)
            {
                printf("one");
            }
            else if (n == 2)
            {
                printf("two");
            }
            else if (n == 3)
            {
                printf("three");
            }
            else if (n == 4)
            {
                printf("four");
            }
            else if (n == 5)
            {
                printf("five");
            }
            else if (n == 6)
            {
                printf("six");
            }
            else if (n == 7)
            {
                printf("seven");
            }
            else if (n == 8)
            {
                printf("eight");
            }
            else if (n == 9)
            {
                printf("nine");
            }
        }

        else if (n > 9)
        {
            if (n % 2 == 0)
            {
                printf("even");
            }
            else
            {
                printf("odd");
            }
        }

        printf("\n");

    }

    return 0;
}
