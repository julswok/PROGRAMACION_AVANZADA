#include <iostream>
#include <vector>

using namespace std;
//Estructura realizada para recolectar la información de los clientes
struct usuario {
  char tipo_cliente;
  int numero_cuenta;
  int cantidad_canales_premium;
  int conexiones_servicios_basicos;
  float monto_a_pagar;
};

int main() {
//Para guardar la información se va a usar un vector de tipo usuario (como la estructura) y se va a llamar usuarios
  vector<usuario> usuarios;
  int continuar;
  //Un do while para que pare cuando el usuario desee
  do{
    //llama a  estructura como nuevo usuario para usarla en el main
    usuario nuevo_usuario;
//ACÁ SE PIDE TODA LA INDO
    cout << "Ingrese el número de cuenta: ";
    cin >> nuevo_usuario.numero_cuenta; // nuevo_usuario (llama a estructura en la pos numero_cuenta)

    cout << "Tipo de cuenta n/N o r/R: ";
    cin >> nuevo_usuario.tipo_cliente;

    cout << "Canales premium: ";
    cin >> nuevo_usuario.cantidad_canales_premium;

    cout << "Conexiones servicios básicos: ";
    cin >> nuevo_usuario.conexiones_servicios_basicos;

    if(nuevo_usuario.tipo_cliente == 'r' || nuevo_usuario.tipo_cliente == 'R'){
      nuevo_usuario.monto_a_pagar = (nuevo_usuario.cantidad_canales_premium * 8.8) + 20.7; //Teniendo en cuenta tarifa básica
    }

    if(nuevo_usuario.tipo_cliente == 'n' || nuevo_usuario.tipo_cliente == 'N'){
      if(nuevo_usuario.conexiones_servicios_basicos >  10){
        nuevo_usuario.monto_a_pagar = 79.9 + (nuevo_usuario.conexiones_servicios_basicos - 10) + (nuevo_usuario.cantidad_canales_premium * 18.7);
      }
      else{
        nuevo_usuario.monto_a_pagar = 79.9 + (nuevo_usuario.cantidad_canales_premium * 18.7);
      }
    }
//a continuación, se agrega un nuevo valor al vector nombre_vector.pushback(lo que se desea agregar )
    usuarios.push_back(nuevo_usuario);
    // Mostrar datos de usuarios
  cout << "RESUMEN: \n";

  for(int i=0; i<usuarios.size(); i++) {
    cout << "Numero de cuenta: " << usuarios[i].numero_cuenta << endl;
    cout << "Tipo de cuenta: " << usuarios[i].tipo_cliente << endl;
    cout << "Canales premium: " << usuarios[i].cantidad_canales_premium << endl;
    cout << "Conexiones servicios basicos: " << usuarios[i].conexiones_servicios_basicos << endl;
    cout << "Monto a pagar: " << usuarios[i].monto_a_pagar << endl;
    cout << endl;
  }

    cout << "Desea continuar? 1 para si  0 para no\n ";
    cin >> continuar;

  } while(continuar == 1);



  return 0;
}
