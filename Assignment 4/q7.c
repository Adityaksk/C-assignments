#include<stdio.h>
void printPascalTriangle(int rows) {
  for (int i = 0; i < rows; i++) {
    // Print leading spaces for proper formatting
    for (int j = 0; j < rows - i - 1; j++) {
      printf("  ");
    }

    // Print current row elements
    for (int j = 0; j <= i; j++) {
      int value = calculateBinomialCoefficient(i, j);
      printf("%4d", value);
    }

    printf("\n");
  }
}

// Utility function to calculate binomial coefficient
int calculateBinomialCoefficient(int n, int k) {
  if (k == 0 || k == n) {
    return 1;
  }

  return calculateBinomialCoefficient(n - 1, k - 1) + calculateBinomialCoefficient(n - 1, k);
}

int main() {
  int rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  printf("Pascal's Triangle:\n");
  printPascalTriangle(rows);

  return 0;
}

