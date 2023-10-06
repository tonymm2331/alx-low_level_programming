#include <stdio.h>
#include <stdlib.h>

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
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);

  // Multiply the two numbers.
  int product = num1 * num2;

  // Print the result.
  printf("%d\n", product);

  return 0;
}

