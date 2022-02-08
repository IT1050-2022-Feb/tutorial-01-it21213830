/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int no1,no2;
  float ave;

  printf("Enter subject mark1 :");
  scanf("%d", &no1);

  printf("Enter subject mark2 :");
  scanf("%d", &no2);

  ave=(no1+no2)/2.0;
  printf("Average mark :%.2f",ave);

  return 0;
}

