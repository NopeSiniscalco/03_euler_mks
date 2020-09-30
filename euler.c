#include <stdio.h>

int prob1(int limit)
{
    int sum = 0;
    int i;
    for (i = 1; i < limit; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
        else if (i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int prob5(int num_to)
{
    int current;
    for (current = 1; 1; current++)
    {
        int factor;
        for (factor = 1; factor <= num_to; factor++)
        {
            if (current % factor != 0)
                break;
            if (factor == num_to)
                return current;
        }
    }
}

int prob6(int num_to)
{
    int sum_of_squares = 0;
    int square_of_sums = 0;
    int i;
    for (i = 1; i <= num_to; i++)
    {
        sum_of_squares += i * i;
        square_of_sums += i;
    }
    square_of_sums *= square_of_sums;
    return square_of_sums - sum_of_squares;
}

int main()
{
    printf("Problem 1 with limit of 1000: %d\n", prob1(1000));
    printf("Problem 5 with factor from 1-20: %d\n", prob5(20));
    printf("Problem 6 with natural numbers up to 100: %d\n", prob6(100));
    return 0;
}