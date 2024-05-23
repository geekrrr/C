#include <stdio.h>

int main()
{
  int height;
  printf("Enter the height of pyramid : ");
  scanf("%d", &height);
  for (int i = height; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      printf("  ");
    }
    for (int z = i; z <= height; z++)
    {
      printf(" *");
    }
    printf("\n");
  }
  return 0;
}