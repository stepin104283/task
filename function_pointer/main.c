#include <stdio.h>

int sum(int a, int b);
int subtract(int a, int b);

int main(void)
{
  int addition,subtraction;
  int (*add) (int x, int y) = sum;
  int (*sub) (int x,int y) = subtract;
  addition = (*add) (5, 6);
  printf("Addition of two numbers:%d\n", addition);
  subtraction = (*sub) (10,4);
  printf("Subtraction of two numbers:%d", subtraction);

  return 0;
}

int sum(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}




