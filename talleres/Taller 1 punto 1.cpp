/*
Autor: Juliana Rubio
Ejercicio 01:
1.- Crear un array con 10 elementos
2.- Crear una funci�n para generar n�meros aleatorios entre 0 y 25
3.- Llenar el array con 10 n�meros aleatorios
4.- Crear un puntero
5.- Imprimir el contenido del array usando el puntero
6.- Imprimir las direcciones del contenido del array usando el puntero*/

#include <iostream>
#include <cstdlib> //biblioteca para rand()
#include <ctime> //biblioteca para time()

using namespace std;

int main() {
  int *dir_num; //mismo tipo que el arreglo

   int numeros[10]; //declaraci�n del arreglo
    dir_num = numeros; //Es darle la direccion en la pos 0, lo mismo que decir die_num=&numeros[0]

   srand(time(NULL)); //inicializa el generador de n�meros aleatorios con una semilla

   //llenado del arreglo con n�meros aleatorios del 0 al 25
   for (int i = 0; i < 10; i++) {
      numeros[i] = rand() % 26; //el operador % asegura que el n�mero aleatorio generado est� en el rango del 0 al 25 y rand () para numeros aleatorios
   }

   /*impresi�n del arreglo
   for (int i = 0; i < 10; i++) {
      cout << numeros[i] << " ";
   }
*/
  cout<<"arreglo impreso con punteros:   ";//escribir afuera
  for (int i=0; i< 10;i++)
    {
      cout<<*(dir_num+i)<<" ";//Si se dice que dir_num++ es porque el apuntador ya se encontraba en la pos 0 del arreglo y aumenta 1 para imprimir
    }

   cout<<"\n direcci�n arreglo impreso: ";//escribir afuera
  for (int i=0; i< 10;i++)
    {
      cout<<(dir_num+i)<<" ";


}
  }
