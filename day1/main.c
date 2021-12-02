#include <stdio.h>
#include <stdlib.h>

#define MAX 2000

int main(void)
{
  FILE *inputf;
  int depths[MAX];
  int inc_count = 0;
  int i = 0;

  inputf = fopen("./day1/input.txt", "r");

  if (inputf == NULL)
  {
    printf("Error");
    exit(1);
  }

  while (!feof(inputf))
  {
    fscanf(inputf, "%d", &depths[i]);
    i++;
  }

  for (int j = 0; j < MAX - 1; j++)
  {
    printf("%d: %d\n", j, depths[j]);
    if (depths[j + 1] > depths[j])
    {
      inc_count++;
    }
  }

  printf("larger than previous: %d\n", inc_count);

  fclose(inputf);

  return 0;
}
