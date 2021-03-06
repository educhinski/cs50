// Sum a range of numbers iteratively

#include <cs50.h>
#include <stdio.h>

int sigma(int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Positive integer: ");
    }
    while (n < 1);
    int answer = sigma(n);
    printf("%i\n", answer);
}

// Return sum of 1 through m
int sigma(int m)
{
    if (m <= 0)
    {
        return 0;
    }
    else
    {
        return (m + sigma(m-1));
    }
}
