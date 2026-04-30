#include <stdio.h>
#include <string.h>
// Prototipo o firma de las funciones del programa
void imprimir(char[]);
// Definición o implementación de la función main
int main()
{
 char nombre[] = "Facultad de Ingenieria";
 imprimir(nombre);
return 0;
}
// Implementación de las funciones del programa
void imprimir(char s[])
{
 int tam;
 tam=strlen(s);
  printf("El tamaño del string es %d\n", tam);
 
 for ( tam=strlen(s)-1 ; tam>=0 ; tam--)
  {
   printf("El tamaño del string es: %d\n", tam);
   printf("%c", s[tam]);
 printf("\n");
  }
}
