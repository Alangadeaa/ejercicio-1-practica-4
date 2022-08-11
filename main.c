#include <stdio.h>

int main(void) {
  int n;
  int a;
  int suma = 0;
  printf("Inserte cantidad para sumar\n");
  scanf("%d", &n);
  for( int i = 0; i < n; i++) {
  printf("Introduzca el numero:\n");
  scanf("%d", &a);
    suma += a;
  }
  printf("Resultado de la suma:%d\n", suma);
  return 0;
}