/*Ejercicios 02:
Se desea capturar los datos de los clientes para ser impreso en la factura.
Se requiere crear una estructura de datos, que encapsule los datos de los usuarios.
Se requiere que el uso de la estructura sea a través de punteros.
Se requiere imprimir las facturas en
un fichero de texto.
Recomendaciones:
1.- Hacer funciones por separado
2.- Anunciar/Documentar acciones
3.- Identificar su fichero fuente .cpp
4.- Subir el fichero fuente a un repositorio.
*/
#include <iostream>
#include <fstream>
using namespace std;


//se crea estructura para reunir datos de facturación
struct clientes{
int numero_cliente;
string nombre_cliente;
char tipo_cliente;
};
//función para predir datos debe ser de tipo cliente
clientes pedir_datos (){
  clientes inscripcion; //llamr a la estructura clientes
  clientes *clientesptr; //hacer un puntero de tipo clientes para recorrer estrucura
  clientesptr = &inscripcion; //darle la dirección
  //Solicitar datos
  cout<<"Ingrese el número del cliente\n";
  cin>> clientesptr ->numero_cliente; //Se le dice al puntero qye vata a esa parte de la estructura con ->

  cout<<"Ingrese el nombre del cliente\n";
  cin>> clientesptr ->nombre_cliente;

  cout<<"Ingrese el tipo del cliente\n";
  cin>> clientesptr ->tipo_cliente;

  return inscripcion; //retorna la estructura;
};
//Pasar como parámetro la cantidad para que el puntero pueda recorrer, y el puntero CON EL TIPO y el nombre para que recorra la estructura
 void fichero (int cant, clientes *ptr){
   ofstream datos("ejercicio02.txt");//nombre físico con .txt
   //preguntar si hay espacio

   if (datos.is_open()) //usar nombre.is_open para preguntar
   {
for (int i = 0; i<cant; i++)
  {
//para esscribir usar  <<
      datos  << (ptr+i)->numero_cliente <<"  ";
      datos << (ptr+i)->nombre_cliente <<"   ";
      datos << (ptr+i)->tipo_cliente <<"   ";
  }
   }

 }

int main (){
int cant, i;
  cout<<"¿Cuantos clientes va a inscribir\n";
  cin>>cant;

  clientes inscripcion[cant];
  clientes *ptr;
  ptr=inscripcion;

  for (i=0; i< cant; i++)
    {
      inscripcion[i] = pedir_datos ();

    }

//Escribir en el fichero y pasar como parametro las cosas que estan en el main
  fichero (cant, inscripcion);
    return 0;

  }
