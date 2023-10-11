#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int n_bytes) {
  if (n_bytes < 0) {
    printf("Error\n");
    exit(2);
  }

  unsigned char *opcodes = (unsigned char *)main;
  for (int i = 0; i < n_bytes; i++) {
    printf("%02x", opcodes[i]);
  }
  printf("\n");
}

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("Usage: ./main number_of_bytes\n");
    exit(1);
  }

  int n_bytes = atoi(argv[1]);
  print_opcodes(n_bytes);

  return 0;
}

