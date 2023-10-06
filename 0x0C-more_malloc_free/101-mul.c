#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 3) {
    printf("Error: Incorrect number of arguments.\n");
    exit(98);
  }

  long long num1 = strtoll(argv[1], NULL, 10);
  long long num2 = strtoll(argv[2], NULL, 10);

  long long product = num1 * num2;

  printf("%lld\n", product);

  return 0;
}

