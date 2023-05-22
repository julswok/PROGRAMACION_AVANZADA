# EJERCICO CLASES ABTRACTAS CARROS
# ENUNCIADO 
• Crear una clase abstracta "Vehiculo" con un método abstracto
"acelerar"
• Luego, crear dos clases hijas "Automovil" y "Motocicleta" que sean clases finales y extiendan de "Vehiculo" En la clase
"Automovil", sobrescribir el método "acelerar" para aumentar la velocidad en 10 km/h, y en la clase "Motocicleta", hacer lo mismo para aumentar la velocidad en 5 km/h.
• Por último, en el main se debe crear un programa que cree instancias de las clases "Automovil" y "Motocicleta", llame al método "acelerar" y muestre la velocidad actual.
• "Automovil" debe ser de 20 km/h y "Motocicleta" de 15 km/h

# CÓDIGO 
```sh
// Definición de la clase abstracta Vehiculo
abstract class Vehiculo {
    public abstract void acelerar(); // Método abstracto para acelerar
}

// Clase final Automovil que extiende de Vehiculo
final class Automovil extends Vehiculo {
    private int velocidad; // Variable para almacenar la velocidad del automóvil

    public Automovil() {
        velocidad = 20; // Inicialización de la velocidad del automóvil a 20 km/h
    }

    @Override
    public void acelerar() {
        velocidad += 10; // Aumenta la velocidad en 10 km/h
    }

    public int getVelocidad() {
        return velocidad; // Devuelve la velocidad actual del automóvil
    }
}

// Clase final Motocicleta que extiende de Vehiculo
final class Motocicleta extends Vehiculo {
    private int velocidad; // Variable para almacenar la velocidad de la motocicleta

    public Motocicleta() {
        velocidad = 15; // Inicialización de la velocidad de la motocicleta a 15 km/h
    }

    @Override
    public void acelerar() {
        velocidad += 5; // Aumenta la velocidad en 5 km/h
    }

    public int getVelocidad() {
        return velocidad; // Devuelve la velocidad actual de la motocicleta
    }
}

// Clase principal Main
public class Main {
    public static void main(String[] args) {
        Automovil automovil = new Automovil(); // Creación de una instancia de Automovil
        Motocicleta motocicleta = new Motocicleta(); // Creación de una instancia de Motocicleta

        automovil.acelerar(); // Llamada al método acelerar en el automóvil
        motocicleta.acelerar(); // Llamada al método acelerar en la motocicleta

        // Mostrar la velocidad actual del automóvil y la motocicleta
        System.out.println("Velocidad del Automovil: " + automovil.getVelocidad() + " km/h");
        System.out.println("Velocidad de la Motocicleta: " + motocicleta.getVelocidad() + " km/h");
    }
}
```
# SALIDA

Velocidad del Automovil: 30 km/h
Velocidad de la Motocicleta: 20 km/h




