#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main (void) {
  srand(time(NULL));
  int numeros[N];
  int frecuencias[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  for (int i = 0; i < N; i++) {
    numeros[i] = rand() % 10;
    frecuencias[numeros[i]]++;
  }
  for (int i = 0; i < N; i++) {
    printf("%d\n", numeros[i]);
  }
  printf("\n");
  for (int i = 0; i < 10; i++) {
    printf("%d", frecuencias[i]);
  }
  return 0;
}
