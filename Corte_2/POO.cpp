/*PRIMER EJERCICIO EN CLASE DE POO REALIZADO EN C++*/

#include <iostream>
#include <cmath>
using namespace std;
//De Farenheith a Celsius

class ConvertirTemp {//Clase
private:
float tempF;//Atributos 
public:
ConvertirTemp (float);//Constructer con el tipo de variable
float convertir ();//acciones
};
//Inicializar constructor
ConvertirTemp::ConvertirTemp (float _tempF){
tempF=_tempF; 
}

float ConvertirTemp::convertir()//Hacer la funcion que esta dentro del privado pero hacerla del tipo de la clase
{
return (tempF - 32) * 5 / 9;
}

//Calcular la n-esima potencia
class Potencia {
private:
int base, exponente;
public:
Potencia(int, int);//Constructor
float potencias();//Funcion para la ponencia}
};
//Constructor
Potencia::Potencia (int b, int e){
  base= b;
  exponente=e;
}
float Potencia::potencias(){
  return pow(base,exponente);  
}

//Raiz n-esima
class Radicacion  {
private:
int indice, radicando;
public:
Radicacion (int, int);
float raiz();
};
Radicacion::Radicacion(int r, int i){
  indice=i;
  radicando=r;
}
float Radicacion::raiz(){
  return pow (radicando,1.0/indice);
}


int main (){
  
   int op;
  while (op!=4)
      {
  cout<<"\n ingrese la opción que desea:\n 1. calculo de farenheith a celcius\n 2. Cálculo potencia n-esima\n 3.Calculo raiz n-esima\n 4. para salir \n";
  cin>>op;
  switch (op){
    case 1:{
      float tempF;
cout<< "Ingrese temperatura ";
  cin>>tempF;
 // Crear un objeto de la clase ConvertirTemp
    ConvertirTemp convertidor(tempF);

    // Llamar al método convertir() para obtener la temperatura en Celsius
    float tempC = convertidor.convertir();

    // Mostrar la temperatura convertida en Celsius
    cout << "La temperatura en grados Celsius es: " << tempC << endl;}
    break;
    case 2:
  {
    int base, exponente;
cout<<"ingrese la base de su potencia ";
  cin>>base;
 cout<<"ingrese el exponente de su potencia ";
  cin>>exponente;   
    Potencia datos (base, exponente);
    float resultado = datos.potencias();
    cout<<"El resultado de su potencia es "<<resultado<<endl;
    break;
  }
    case 3:{
      int radicando, indice;
cout<<"ingrese el radicando de su raiz  ";
  cin>>radicando;
 cout<<"ingrese el indice de su raiz  ";
  cin>>indice;   
    Radicacion rad1 (radicando, indice);
    float Resultado = rad1.raiz();
    cout<<"El resultado de su raiz  es "<<Resultado<<endl;
      break;
  }
  }
  }
  return 0;
}
