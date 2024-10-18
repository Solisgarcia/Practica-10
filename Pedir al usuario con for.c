#include <stdio.h>  

int main ()
{
   int arr[3][3];
   int i, j;

   // Ingresar los valores de la matriz por el usuario
   printf("Ingrese los valores de la matriz (3x3):\n");
   for(i = 0; i < 3; i++) {
      for(j = 0; j < 3; j++) {
         printf("Elemento [%d][%d]: ", i, j);
         scanf("%d", &arr[i][j]);  // Lectura de los valores
      }
   }

   // Imprimir la matriz
   printf("\nImprimir matriz:\n");
   for(i = 0; i < 3; i++) {
      for(j = 0; j < 3; j++) {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }

   return 0;
}
