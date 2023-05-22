/*EJERCICIO REALIZADO EN CLASE CON EL OBJETIVO DE USAR ARRAYLIST CON UNA PLANILLA DE EMPLEADOS*/

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

// se crea una clase de datos para faciliar el tratamiento de los datos
class Empleado {
  //Atributos privados
  private String nombre;
  private int edad;
  private int salario;

  //Se necesita un constructor para reconocer datos iniciales 
  public Empleado (String nombre, int edad, int salario){
         this.nombre=nombre;
          this.edad=edad;
          this.salario= salario;
    
  }
  //Se necesita capturar el nombre 
  public String getNombre(){
    return nombre; 
  }
  public int getEdad(){
    return edad; 
  }
  public int getSalario(){
    return salario; 
  }
  //Se necesita ingresar el nombre
  public void setNombre(String nombre){
      this.nombre = nombre;

  }
  public void setEdad(int edad){
      this.edad = edad;

  }
  public void setSalario(int salario){
      this.salario = salario;

  }
  // se quiere imprimir los datos contenidos en el objeto
  public String presentarDatos (){
    return "("+getNombre()+ ","+getEdad()+","+getSalario()+")";
  }
  
}//Fin clase empleado

class CompararEdadesEmpleado implements Comparator<Empleado>{
  public int compare(Empleado emp1, Empleado emp2){
    return emp1.getEdad() - emp2.getEdad(); 
  }
}

class CompararSalarioEmpleado implements Comparator<Empleado>{
  public int compare(Empleado emp1, Empleado emp2){
    return emp1.getSalario() - emp2.getSalario(); 
  }
}

public class Planilla {
  public static void main (String []args){
    ArrayList<Empleado> listaEmpleados = new ArrayList<Empleado>();
    //Se llena la lista con empleados
    listaEmpleados.add(new Empleado("Jhon", 18, 100000));
    listaEmpleados.add(new Empleado("Mario", 48, 1030));
    listaEmpleados.add(new Empleado("Juan", 58, 30400));
    listaEmpleados.add(new Empleado("Manuel", 38, 25000));
    
    //Se presenta la lista sin ordenar
    System.out.println("Lista de empleados sin ordenar");
    for (Empleado empleado : listaEmpleados) {
      System.out.println(empleado.presentarDatos());
    }
    
    // Ordenar y mostrar la lista por edades
    Collections.sort(listaEmpleados, new CompararEdadesEmpleado());
    System.out.println("Lista de empleados ordenados por edad:");
    for (Empleado empleado : listaEmpleados) {
      System.out.println(empleado.presentarDatos());
    }

    // Ordenar y mostrar la lista por salarios
    Collections.sort(listaEmpleados, new CompararSalarioEmpleado());
    System.out.println("Lista de empleados ordenados por salario:");
    for (Empleado empleado : listaEmpleados) {
      System.out.println(empleado.presentarDatos());
    }
  }
}
