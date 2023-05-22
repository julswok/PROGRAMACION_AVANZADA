# EJERCICIO OPCIONAL
## ENUNCIADO 
1. Declara una clase abstracta "Legislador" que herede de la clase "Persona", con un atributo "provinciaQueRepresenta" (tipo String) y otros atributos.
2. Declara un método abstracto "getCamaraEnQueTrabaja".
3.Crea dos clases concretas que hereden de Legislador: la clase "Diputado" y la clase
"'Senador" que sobreescriban los métodos abstractos necesarios.
4.Crea una lista de legisladores y muestra por pantalla la cámara en que trabajan
haciendo uso del polimorfismo.
```sh
// 1. Clase abstracta Legislador que hereda de la clase Persona
abstract class Legislador extends Persona {
    private String provinciaQueRepresenta; // Atributo que indica la provincia que representa

    // Constructor de la clase Legislador
    public Legislador(String nombre, int edad, String provinciaQueRepresenta) {
        super(nombre, edad);
        this.provinciaQueRepresenta = provinciaQueRepresenta;
    }

    public String getProvinciaQueRepresenta() {
        return provinciaQueRepresenta;
    }

    // 2. Método abstracto para obtener la cámara en la que trabaja
    public abstract String getCamaraEnQueTrabaja();
}

// 3. Clase concreta Diputado que hereda de Legislador
class Diputado extends Legislador {
    // Constructor de la clase Diputado
    public Diputado(String nombre, int edad, String provinciaQueRepresenta) {
        super(nombre, edad, provinciaQueRepresenta);
    }

    // Sobrescritura del método abstracto para obtener la cámara en la que trabaja
    @Override
    public String getCamaraEnQueTrabaja() {
        return "Cámara de Diputados";
    }
}

// Clase concreta Senador que hereda de Legislador
class Senador extends Legislador {
    // Constructor de la clase Senador
    public Senador(String nombre, int edad, String provinciaQueRepresenta) {
        super(nombre, edad, provinciaQueRepresenta);
    }

    // Sobrescritura del método abstracto para obtener la cámara en la que trabaja
    @Override
    public String getCamaraEnQueTrabaja() {
        return "Cámara de Senadores";
    }
}

// Clase Persona
class Persona {
    private String nombre;
    private int edad;

    // Constructor de la clase Persona
    public Persona(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    public String getNombre() {
        return nombre;
    }

    public int getEdad() {
        return edad;
    }
}

// Clase principal
public class Main {
    public static void main(String[] args) {
        // 4. Creación de una lista de legisladores
        List<Legislador> legisladores = new ArrayList<>();
        legisladores.add(new Diputado("Juan", 40, "Buenos Aires"));
        legisladores.add(new Senador("María", 45, "Córdoba"));
        legisladores.add(new Diputado("Pedro", 38, "Santa Fe"));

        // Mostrar por pantalla la cámara en la que trabajan los legisladores
        for (Legislador legislador : legisladores) {
            System.out.println("Nombre: " + legislador.getNombre());
            System.out.println("Edad: " + legislador.getEdad());
            System.out.println("Provincia: " + legislador.getProvinciaQueRepresenta());
            System.out.println("Cámara: " + legislador.getCamaraEnQueTrabaja());
            System.out.println();
        }
    }
}
```
## SALIDA EN PANTALLA
Nombre: Juan
Edad: 40
Provincia: Buenos Aires
Cámara: Cámara de Diputados

Nombre: María
Edad: 45
Provincia: Córdoba
Cámara: Cámara de Senadores

Nombre: Pedro
Edad: 38
Provincia: Santa Fe
Cámara: Cámara de Diputados

