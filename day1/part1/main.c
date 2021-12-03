#include <stdio.h>
#include <stdlib.h>

#define INPUT_LEN 2000

int main(void)
{
  FILE *inputf;
  int depths[INPUT_LEN];
  int inc_count = 0;
  int line = 0;

  inputf = fopen("./day1/input.txt", "r");

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

  fclose(inputf);

  for (int i = 0; i < INPUT_LEN - 1; i++)
  {
    if (depths[i + 1] > depths[i])
    {
      inc_count++;
    }
  }

  printf("larger than previous: %d\n", inc_count);

  return 0;
}
