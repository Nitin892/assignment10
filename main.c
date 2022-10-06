// 1. Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>
#include <math.h>
float area(float);
int main()
{
    float r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("%.2f", area(r));

    return 0;
}
float area(float r)
{
    return M_PI * r * r;
}

// 2. Write a function to calculate simple interest.(TSRS)

#include <stdio.h>
#include <math.h>
float simpleInterest(float, float, float);
int main()
{
    float P, R, T;
    printf("Enter Principle,Rate of interest and Time period: ");
    scanf("%f %f %f", &P, &R, &T);
    printf("%.2f", simpleInterest(P, R, T));
    return 0;
}
float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)

#include <stdio.h>
#include <math.h>
int isEven(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d", isEven(x));
    return 0;
}
int isEven(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    return 0;
}

// 4. Write a function to print first N natural numbers (TSRN)

#include <stdio.h>
#include <math.h>
void naturalNumbers(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    naturalNumbers(x);
    return 0;
}
void naturalNumbers(int x)
{

    for (int i = 1; i <= x; i++)
    {
        printf("%d\n", i);
    }
}

// 5. Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>
#include <math.h>
void oddNaturalNumber(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    oddNaturalNumber(x);
    return 0;
}
void oddNaturalNumber(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d\n", i * 2 + 1);
    }
}

// 6. Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>
#include <math.h>
int factorial(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d\n", factorial(x));
    return 0;
}
int factorial(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f * i;
    }

    return f;
}

// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)
#include <stdio.h>
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int combination(int n, int r)
{
    return (fact(n) / fact(r) * fact(n - r));
}

int main()
{
    int n, r;
    printf("Enter n and r\n");
    scanf("%d %d", &n, &r);
    printf("%d", combination(n, r));
    return 0;
}

// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)

#include <stdio.h>
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int permutation(int n, int r)
{
    return (fact(n) / fact(n - r));
}

int main()
{
    int n, r;
    printf("Enter n and r\n");
    scanf("%d %d", &n, &r);
    printf("%d", permutation(n, r));
    return 0;
}

// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)
#include <stdio.h>

int isPresent(int x, int y);
int main()
{
    int n, y;
    printf("Enter number and digit: ");
    scanf("%d %d", &n, &y);
    printf("%d", isPresent(n, y));
    return 0;
}
int isPresent(int n, int y)
{
    while (n > 0)
    {
        if (n % 10 == y)
        {
            return 1;
        }
        n = n / 10;
    }
    return 0;
}

// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>
int isPrime(int);
void primefactors(int x);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    primefactors(n);
    return 0;
}

int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void primefactors(int n)
{
    if (isPrime(n))
    {
        printf("%d\n", 0);
    }
    else
    {
        for (int i = 2; n != 1; i++)
        {
            if (n % i == 0)
            {
                printf("%d\n", i);
                n = n / i;
                i = 1;
            }
        }
    }
}
