#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  // Check if the number of arguments is correct.
  if (argc != 3) {
    printf("Error: Incorrect number of arguments.\n");
    exit(98);
  }

  // Check if the arguments are positive integers.
  for (int i = 1; i < 3; i++) {
    for (int j = 0; argv[i][j] != '\0'; j++) {
      if (!isdigit(argv[i][j])) {
        printf("Error: Argument %d is not a positive integer.\n", i);
        exit(98);
      }
    }
  }

  // Convert the arguments to integers.
  long long num1 = strtoll(argv[1], NULL, 10);
  long long num2 = strtoll(argv[2], NULL, 10);

  // Check if the result is too large to be represented by an integer.
  if (num1 * num2 > LLONG_MAX) {
    printf("Error: Product is too large to be represented by an integer.\n");
    exit(98);
  }

  // Multiply the two numbers.
  long long product = num1 * num2;

  // Print the result.
  printf("%lld\n", product);

  return 0;
}

