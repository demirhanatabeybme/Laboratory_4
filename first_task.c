/* Task description:

Write functions that receive a real number parameter, and return:

    cube() – its third power,
    absolute() – its absolute value (there is a fabs() library function but do not use it this time)!

Write a program that tabulates the values of a, a3, |a| and sin(a) using 4 decimal digits after the decimal point from a = −1 to +1, stepping by 0.1! Include math.h to use sin.

*/

#include <stdio.h>
#include <math.h>

double cube(double param)
{
  return pow(param, 3);
}

int absolute(int x)
{
  return (x < 0) ? -x : x;
}

int main()
{

  return 0;
}
