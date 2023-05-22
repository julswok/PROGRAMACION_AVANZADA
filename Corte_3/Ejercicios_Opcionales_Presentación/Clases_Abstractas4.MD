# EJERCICIO OPCIONAL
## ENUNCIADO 
Sistema de gestión de empleados
Se te ha encargado desarrollar un sistema de gestión de empleados para una empresa. La empresa tiene diferentes tipos de empleados, como empleados a tiempo completo, empleados a tiempo parcial y contratistas. Cada tipo de empleado tiene atributos específicos y se les paga de manera diferente.
Los requisitos del sistema son los siguientes:
1. Debes crear una clase abstracta llamada "Empleado que tenga los siguientes atributos y métodos:
Atributos:
nombre (String)
edad (int)
salario (double)
Métodos:
obtenerDetalles(): Imprime los detalles del empleado (nombre, edad y salario).
calcularSalario(): Método abstracto para calcular el salario del empleado. Este método debe ser implementado en las clases derivadas.
2. Debes crear las siguientes clases derivadas de "Empleado*:
3. a) "EmpleadoTiempoCompleto*:
Atributos adicionales:
horasTrabajadas (int)
salarioPorHora (double)
• Métodos:
calcularSalario(): Calcula el salario del empleado a tiempo completo multiplicando las horas trabajadas por el salario por hora.
4. b) "EmpleadoTiempoParcial*:
• Atributos adicionales:
• horasTrabajadas (int)
• salarioPorHora (double)
• Métodos:
calcularSalario): Calcula el salario del empleado a tiempo parcial multiplicando las horas trabajadas por el salario por hora.
5. c) Contratista:
• Atributos adicionales:
• horasTrabajadas (int)
• tarifaPorHora (double)
Métodos:
• calcularSalario(): Calcula el salario del contratista multiplicando las horas trabajadas por la tarifa por hora. A los contratistas se les paga el doble si trabajan más de 40 horas.
6. En el método principal (main) del programa, crea instancias de diferentes tipos de empleados y almacénalas en un arreglo de tipo "Empleado". Luego, recorre el arreglo y llama al
método obtenerDetalles()° y "calcularSalario()* para cada empleado.
7. Prueba el sistema proporcionando diferentes valores de entrada y verifica que los cálculos de salario y los detalles del empleado sean correctos.
Recuerda aplicar los conceptos de herencia y polimorfismo en la implementación de las clases y métodos. Esto permitiró tratar a los diferentes tipos de empleados de manera „.
uniforme a través de la referencia de tipo "Empleado" y lograr un código más flexible y extensible.

# CODIGO 
```sh
// Clase abstracta Empleado
abstract class Empleado {
    private String nombre;
    private int edad;
    private double salario;

    // Constructor de la clase Empleado
    public Empleado(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    // Método para obtener los detalles del empleado
    public void obtenerDetalles() {
        System.out.println("Nombre: " + nombre);
        System.out.println("Edad: " + edad);
        System.out.println("Salario: $" + salario);
    }

    // Método abstracto para calcular el salario del empleado
    public abstract void calcularSalario();
}

// Clase EmpleadoTiempoCompleto que hereda de Empleado
class EmpleadoTiempoCompleto extends Empleado {
    private int horasTrabajadas;
    private double salarioPorHora;

    // Constructor de la clase EmpleadoTiempoCompleto
    public EmpleadoTiempoCompleto(String nombre, int edad, int horasTrabajadas, double salarioPorHora) {
        super(nombre, edad);
        this.horasTrabajadas = horasTrabajadas;
        this.salarioPorHora = salarioPorHora;
    }

    // Implementación del método calcularSalario para EmpleadoTiempoCompleto
    @Override
    public void calcularSalario() {
        double salario = horasTrabajadas * salarioPorHora;
        setSalario(salario);
    }

    // Método setter para el salario del empleado
    public void setSalario(double salario) {
        this.salario = salario;
    }
}

// Clase EmpleadoTiempoParcial que hereda de Empleado
class EmpleadoTiempoParcial extends Empleado {
    private int horasTrabajadas;
    private double salarioPorHora;

    // Constructor de la clase EmpleadoTiempoParcial
    public EmpleadoTiempoParcial(String nombre, int edad, int horasTrabajadas, double salarioPorHora) {
        super(nombre, edad);
        this.horasTrabajadas = horasTrabajadas;
        this.salarioPorHora = salarioPorHora;
    }

    // Implementación del método calcularSalario para EmpleadoTiempoParcial
    @Override
    public void calcularSalario() {
        double salario = horasTrabajadas * salarioPorHora;
        setSalario(salario);
    }

    // Método setter para el salario del empleado
    public void setSalario(double salario) {
        this.salario = salario;
    }
}

// Clase Contratista que hereda de Empleado
class Contratista extends Empleado {
    private int horasTrabajadas;
    private double tarifaPorHora;

    // Constructor de la clase Contratista
    public Contratista(String nombre, int edad, int horasTrabajadas, double tarifaPorHora) {
        super(nombre, edad);
        this.horasTrabajadas = horasTrabajadas;
        this.tarifaPorHora = tarifaPorHora;
    }

    // Implementación del método calcularSalario para Contratista
    @Override
    public void calcularSalario() {
        double salario;
        if (horasTrabajadas > 40) {
            salario = horasTrabajadas * tarifaPorHora * 2; // Se les paga el doble si trabajan más de 40 horas
        } else {
            salario = horasTrabajadas * tarifaPorHora;
        }
        setSalario(salario);
    }

    // Método setter para el salario del empleado
    public void setSalario(double salario) {
        this.salario = salario;
    }
}

// Clase principal
public class Main {
    public static void main(String[] args) {
        // Crear instancias de diferentes tipos de empleados y almacenarlos en un arreglo de tipo Empleado
        Empleado[] empleados = new Empleado[3];
        empleados[0] = new EmpleadoTiempoCompleto("Juan", 30, 40, 15.0);
        empleados[1] = new EmpleadoTiempoParcial("María", 25, 20, 10.0);
        empleados[2] = new Contratista("Pedro", 35, 45, 20.0);

        // Recorrer el arreglo y llamar a los métodos obtenerDetalles() y calcularSalario() para cada empleado
        for (Empleado empleado : empleados) {
            empleado.obtenerDetalles();
            empleado.calcularSalario();
            System.out.println();
        }
    }
}

```
# SALIDA

> Nombre: Juan
> Edad: 30
> Salario: $600.0

> Nombre: María
> Edad: 25
> Salario: $200.0

> Nombre: Pedro
> Edad: 35
> Salario: $1800.0

