/*	Autor: Juliana Rubio
*/

/*OBJETIVOS:
-Resumen sobre TDA
- R/w ON FILES
-Listas.

ESTRUCTURAS EN C++.

-Tipos de datos definidos por el usuario
-Permite agrupar tipos de datos y ser usados de forma encapsulada, como objetos

DESVENTAJAS:
-No pueden ser tipo de datos nativos o propios de C++
-Operadores como +/-, No pueden ser empleados en varianñes de estructuras
-No permite ocultación de los miembros


*/



/* AUTOR:Juliana Rubio
Problema:
-Crear una estructura para pedir datos básicos de usuario
_Crear una lista de plabras creadas aleatoriamentente
-Almacenar en un fichero
-Leer y presentar en pantalla la lectura de un fichero
*/





#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

//Se crea una estructura básica para la captura de datos de los usuarios

struct datos_usuarios{
string nombre;
string apellido;
int edad;
};

// Se crea una lista, como conjunto de palabras disponibles para jugar

const string lista_palabras[]= {"hola","mañana", "hoy","tarde", "Noche"};


int main()
{
    //Se declaeran variables a usar
    int i,j, cantidad;

    //Se pide cuantos usuarios va a ingresar?:
    cout<<"Cuantos usuarios va a ingresar?: \n";
    cin>> cantidad;
    //Se crea un objeto struct tamaño cantidad
    datos_usuarios personas [cantidad];

    //Se piden los datos de los usuarios
    //Se escribe sobre un fichero; se usa "ofstream" para almacenar el fichero
    //Se crea el objeto tipo ofstream (digital) jumto con el nombre del ficheor (físico)
    ofstream fichero_escritura ("ejercicioprogramacio.txt");  //Lo txt es el físico
    //Se pregunta si hay espaciio de memoria
    if (fichero_escritura.is_open()){
    for (i=0;i<cantidad;i++)
    {
        cout<<"Ingrese nombre\n";
        cin>>personas[i].nombre;
         cout<<"Ingrese apellido \n";
         cin>>personas[i].apellido;
          cout<<"Ingrese edad\n";
          cin>>personas[i].edad;
    }

    }else{
        cout<<"No tiene permisos de escritura"<<endl;
    }
          //Se imprimen los datos
          for (i=0;i<cantidad;i++){

            cout<< "\nNombre ["<<i+1<<"] : "<<personas[i].nombre<<endl;
            fichero_escritura << personas[i].nombre;
            cout<< "\Apeliido ["<<i+1<<"] : "<<personas[i].apellido<<endl;

			fichero_escritura << personas[i].apellido;

            cout<< "\nEdad ["<<i+1<<"] : "<<personas[i].edad<<endl;
            fichero_escritura << personas[i].edad;

          }





return 0;
    }

