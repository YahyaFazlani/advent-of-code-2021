#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  FILE *inputf;
  int pos = 0;
  int depth = 0;

  inputf = fopen("day2/input.txt", "r");

  if (inputf == NULL)
  {
    printf("Error while opening file");
    exit(1);
  }

  while (!feof(inputf))
  {
    char *command = malloc(7 * sizeof(char));
    int val;
    fscanf(inputf, "%s %d", command, &val);

    if (strcmp("forward", command) == 0)
    {
      pos += val;
    }
    else if (strcmp("up", command) == 0)
    {
      depth -= val;
    }
    else if (strcmp("down", command) == 0)
    {
      depth += val;
    }
  }

  fclose(inputf);

  printf("horizontal position * depth = %d\n", pos * depth);

  return 0;
}