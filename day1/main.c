#include <stdio.h>
#include <stdlib.h>

#define MAX 2000

int main(void)
{
  FILE *inputf;
  int depths[MAX];
  int inc_count = 0;
  int line = 0;

  inputf = fopen("./day1/input.txt", "r");

  if (inputf == NULL)
  {
    printf("Error");
    exit(1);
  }

  while (!feof(inputf))
  {
    fscanf(inputf, "%d", &depths[line]);
    line++;
  }

  fclose(inputf);

  for (int i = 0; i < MAX - 1; i++)
  {
    if (depths[i + 1] > depths[i])
    {
      inc_count++;
    }
  }

  printf("larger than previous: %d\n", inc_count);

  return 0;
}
