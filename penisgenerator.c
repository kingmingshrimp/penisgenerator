#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  char *penisSize[] = {"small\0", "medium\0", "large\0", "strange\0"};

  srand(time(NULL));

  // mfw anvil
  printf("AGHHHHHHHhhhhhhhhhhhhhhhhhhhhhhhhHHHHH\n");
  printf("my peanus\n");
  printf("oooooo my pronis\n");

  printf("the penis has been destroyed. please generate another\n");

  int randSize = rand() % 4;

  // printf("%d\n", randSize);
  // puts(penisSize[randSize]);
  printf("penis size = %s\n", penisSize[randSize]);

  return 0;
}
