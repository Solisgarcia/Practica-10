#include <stdio.h>  

// Función para sumar dos matrices de 3x3
void sumarMatrices(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]) {
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];  // Sumar elemento a elemento
        }
    }
}

int main () {
   int matriz1[3][3], matriz2[3][3], resultado[3][3];
   int i, j;

   // Ingresar los valores de la primera matriz por el usuario
   printf("Ingrese los valores de la primera matriz (3x3):\n");
   for(i = 0; i < 3; i++) {
      for(j = 0; j < 3; j++) {
         printf("Elemento [%d][%d]: ", i, j);
         scanf("%d", &matriz1[i][j]);  // Lectura de los valores
      }
   }

   // Ingresar los valores de la segunda matriz por el usuario
   printf("\nIngrese los valores de la segunda matriz (3x3):\n");
   for(i = 0; i < 3; i++) {
      for(j = 0; j < 3; j++) {
         printf("Elemento [%d][%d]: ", i, j);
         scanf("%d", &matriz2[i][j]);  // Lectura de los valores
      }
   }

   // Sumar las matrices
   sumarMatrices(matriz1, matriz2, resultado);

   // Imprimir la matriz resultado
   printf("\nLa matriz resultado de la suma es:\n");
   for(i = 0; i < 3; i++) {
      for(j = 0; j < 3; j++) {
         printf("%d ", resultado[i][j]);
      }
      printf("\n");
   }

   return 0;
}
