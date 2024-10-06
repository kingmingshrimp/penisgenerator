#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // initialise rand
  srand(time(NULL));

  char *penisSize[] = {"small\0", "medium\0", "large\0", "strange\0"};

  // bottom surgery
  printf("AGHHHHHHHhhhhhhhhhhhhhhhhhhhhhhhhHHHHH\n");
  printf("my peanus\n");
  printf("oooooo my pronis\n");
  printf("the penis has been destroyed. please generate another\n");

  // generate a number between 0 and 4
  int randSize = rand() % 4;

  //print the penis size
  printf("penis size = %s\n", penisSize[randSize]);

  return 0;
}
