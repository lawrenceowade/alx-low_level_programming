#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of p
 */
int factorial(int p) {
  
  if (p < 0) {
    return (-1);
  }

  if (p == 0) {
    return (1);
  }
 
  return (p * factorial(p - 1));
}

