/* Task description:
A twin prime is a prime number that is either 2 less or 2 more than another prime number - for example, either member of the twin prime pair (41, 43).
In other words, a twin prime is a prime that has a prime gap of two.

The first couple of twin primes are (3, 5), (5, 7) and (11, 13). Write a C program to find the 60th twin prime!
Extend the program to check whether the number between the twin primes has any digit equal to 5.
Avoid code duplication, use functions wherever reasonable! Follow the top-down design methodology.
Top-down: when solving programming problems by breaking them down into smaller and smaller sub-problems until each one is trivial or known

*/

#include <stdio.h>

int is_prime(int num)
{
  int i = 2;
  int isPrime = 1;
  if (num < 2)
  {
    isPrime = 0;
  }
  else
  {
    while (i * i <= num)
    {
      if (num % i == 0)
      {
        isPrime = 0;
        break;
      }
      i++;
    }
  }
  return isPrime;
}

void find_two_primes()
{
  int i = 0;
  int found = 0;

  while (found < 60)
  {
    if (is_prime(i) && is_prime(i + 2))
    {
      found += 1;
      printf("(%d, %d)\n", i, i + 2);
    }
    i += 2;
  }
}

int main()
{
  find_two_primes();
  return 0;
}
