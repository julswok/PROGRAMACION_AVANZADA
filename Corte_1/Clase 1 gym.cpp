#include <iostream>
//Se tiene un gym que requiere un sistema informativo para capturar los datos de sus clientes

using namespace std;
struct gym
{
 string nombre;
 int edad;
 int ID;
float masa;
char genero;
string correo;
int movil;
int cant_hijos;
string direccion;
};

int main()

{
    int cant;
    cout<<"ingrese la cantidad de personas a registrar";
    cin>>cant;
char continuar;
 gym Cliente1[cant];

 for (int i=0;i<cant;i++)
 {

  cout<<"Ingrese el nombre de la persona"<<endl;
  cin>>Cliente1[i].nombre;

  cout<<"Ingrese la edad de la persona"<<endl;
  cin>>Cliente1[i].edad;

  cout<<"Ingrese el ID de la persona\n";
  cin>>Cliente1[i].ID;

  cout<<"Ingrese la masa de la persona\n";
  cin>>Cliente1[i].masa;

  cout<<"Ingrese el genero de la persona\n";
  cin>>Cliente1[i].genero;

  cout<<"Ingrese el correo de la persona\n";
  cin>>Cliente1[i].correo;

  cout<<"Ingrese el movil de la persona\n";
  cin>>Cliente1[i].movil;


  cout<<"Ingrese cantidad de hijos\ng";
  cin>>Cliente1[i].cant_hijos;

  cout<<"Ingrese dirección\n";
  cin>>Cliente1[i].direccion;


cout<<"Se ha registrado con exito:"<<Cliente1[i].nombre;
cout<<"presione 0 para recibir información de la persona, 1 para salir";
cin>>continuar;
if (continuar=='0')
{
    cout<<"el número de telefono es: ";
    cout<<Cliente1[i].movil<<endl;
    cout<<"la masa del cliente es: ";
    cout<<Cliente1[i].masa<<endl;
    cout<<"la identificación es: ";
   cout<< Cliente1[i].ID<<endl;
   cout<<"Género del cliente: ";
    cout<< Cliente1[i].genero<<endl;
    cout<<"la edad es: "<<Cliente1[i].edad<<endl;
    cout<<"la direccion del cliente es"<<Cliente1[i].direccion<<endl;
    cout<<"el correo del cliente es: "<<Cliente1[i].correo<<endl;
    cout<<"la cantidad de hijos del cliente es";
    cout<<Cliente1[i].cant_hijos<<endl;

}

    return 0;
}







