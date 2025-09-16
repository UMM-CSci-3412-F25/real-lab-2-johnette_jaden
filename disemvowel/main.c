#include <stdio.h>
#include <stdlib.h>

#include "disemvowel.h"

int main(int argc, char *argv[]) {
  char *line;
  size_t size;
  
  size = 100;
  line = (char*) malloc (size + 1);

  while (getline(&line, &size, stdin) > 0) {
	  char* disemvoweled_line = disemvowel(line);
    	  printf("%s\n", disemvoweled_line);
	  free(disemvoweled_line);
  }
  free(line);
}
