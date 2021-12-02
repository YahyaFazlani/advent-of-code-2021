#include <stdio.h>
#include <stdlib.h>

#define MAX 2000

int main(void)
{
  FILE *inputf;
  int depths[MAX];
  int inc_count = 0;
  int line = 0;

  inputf = fopen("day1/input.txt", "r");
  
  if (inputf == NULL)
  {
    printf("Error while opening file");
    exit(1);
  }

  while (!feof(inputf))
  {
    fscanf(inputf, "%d", &depths[line]);
    line++;
  }

  for (int i = 0; i < MAX - 3; i++)
  {
    int window1 = depths[i] + depths[i + 1] + depths[i + 2];
    int window2 = depths[i + 1] + depths[i + 2] + depths[i + 3];

    if (window2 > window1)
    {
      inc_count++;
    }
  }

  printf("Windows larger than the previous: %d", inc_count);

  return 0;
}