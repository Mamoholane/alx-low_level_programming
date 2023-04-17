#include <stdio.h>
#include "dog.h"

/**
 * main - check Holberton School's student code.
 *
 * Return: Always 0.
 */
int main(void)
{
  struct dog my_dog;

  init_dog(&my_dog, "Luwey", 3.2, "Itsy");
  printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
  return (0);
}
