
#include <stdio.h>  

int main ()
{
   int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
   int i = 0, j;

   printf("Imprimir matriz\n");

   while(i < 3) 
   {
      j = 0; // Reiniciamos j para cada fila
      while(j < 3) 
      {
         printf("%d ", arr[i][j]);
         j++;
      }
      printf("\n");
      i++;
   }

   return 0;
}
