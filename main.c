#include <stdio.h>
#include <stdlib.h>


int* getInts(int n) {

  int* result = malloc(n);

  for (int i = 0; i < n; i++) {
    scanf("%i", &result[i]);
  }

  return result;
}



int* sort(int n, int* intArray) {

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (intArray[i] < intArray[j]) {
        int temp = intArray[i];
        intArray[i] = intArray[j];
        intArray[j] = temp;
      }
    }
  }

  return intArray;
}

int main(void) {

  int  n = 10;
  int* integers = getInts(n);

  integers = sort(n, integers);
  printf("========\n");

  for (int i = 0; i < n; i++) {
    printf ("%i \n", integers[i]);
  }

  free(integers);
}
