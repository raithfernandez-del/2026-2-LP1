//Dado un entero positivo n leído por teclado, calcular
//repetidamente la suma de sus dígitos hasta obtener un único dígito (raíz
//digital). Por ejemplo, n = 9875 → 9+8+7+5 = 29 → 2+9 = 11 →
//1+1 = 2. Raiz digital = 2.

#include <stdio.h>

int main () {
  int n, suma;

  printf("Introduce un entero positivo: ");
  scanf("%d", &n);
  if (n <= 0) {
    printf("El número debe ser positivo.\n");
    return 1; 
  }
 while (n > 9) {
    for (suma = 0; n > 0; suma += n % 10, n /= 10);
    n = suma;
  }
  printf("Raiz digital = %d\n", n);

  
  return 0;
}


   

