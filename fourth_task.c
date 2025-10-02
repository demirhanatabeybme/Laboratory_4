/* Task description:
Create a simple menu controlled program! The program stores a number with an initial value of n = 1. Then the program should print the actual value of n and the menu below. After the user selects a menu item (scanf()) the program should do whatever the user requested and print the value of n and the menu! These must be repeated as long as the user chooses anything but the Exit menu option! Use switch() and post-testing do ... while() loop.

printf("0. Restore the initial value (n = 1)\n"
       "1. Add 1\n"
       "2. Negate the number (+/-)\n"
       "3. Multiple by 2\n"
       "9. Exit\n");

Realize each operation in a (tiny) function that receives the value of n as a parameter and returns the modified value! Your main() can only call these functions to change the value of n.

*/

#include <stdio.h>

int main()
{
  int n = 1;
  int d = 0;
  while (1)
  {
    printf("0. Restore the initial value (n = 1)\n"
           "1. Add 1\n"
           "2. Negate the number (+/-)\n"
           "3. Multiple by 2\n"
           "9. Exit\n");
    scanf("%d", &d);

    if (d == 0)
    {
      n = 1;
    }
    if (d == 1)
    {
      n += 1;
    }
    if (d == 2)
    {
      n *= -1;
    }
    if (d == 3)
    {
      n *= 2;
    }
    if (d == 9)
    {
      return 0;
    }

    printf("n value is:%d \n", n);
  }

  return 0;
}
