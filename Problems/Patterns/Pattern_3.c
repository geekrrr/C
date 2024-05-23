#include <stdio.h>

int main()
{
  int depth;
  printf("Enter the depth of pyramid : ");
  scanf(" %d", &depth);
    for (int j = depth; j > 0; j--)
    {
      for (int i = 0; i < j; i++)
      {
        printf("* ");
      }
      printf("\n");
    }
  return 0;
}