#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 100

int main (void) {
  srand(time(NULL));
  int numeros[N];
  double suma = 0.0;
  int max = -999999;
  int min = 999999;
  for (int i = 0; i < N; i++) {
    numeros[i] = rand() % (M + 1);
    printf("%d\n", numeros[i]);
    suma += numeros[i];
    if (numeros[i] > max) max = numeros[i];
    if (numeros[i] < min) min = numeros[i];
  }
  double promedio = suma / N;
  printf("Promedio: %.2f\n", promedio);
  printf("Max: %d, Min: %d\n", max, min);
  return 0;
}
