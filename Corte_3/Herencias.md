# EJERCICIO EN CLASE HERENCIAS 
Este ejercicio se realizó durante la clase con el propósito de entender como funcionan las herencias en java.

## CÓDIGO
#### CLASE MADRE #1
>Clase Persona
```sh
package juliana.HerenciaPrincipal;

/**
 *
 * @author julia
 */
public class Persona {
    protected String nombre;
    protected String apellidos;
    protected int edad;
//Constructor
    public Persona(String nombre, String apellidos, int edad) {
        this.nombre = nombre;
        this.apellidos = apellidos;
        this.edad = edad;
    }
    //Getters

    public String getNombre() {
        return nombre;
    }

    public String getApellidos() {
        return apellidos;
    }

    public int getEdad() {
        return edad;
    }
    
    
}

```
#### CLASES HIJAS
>Clase alumno
```sh
package juliana.HerenciaPrincipal;

/**
 *
 * @author julia
 */
public class Alumno extends Persona {
    //Atributos  de la subclase
    private String idalumno;

    public Alumno (String nombre, String apellidos, int edad, String idalumno) {
        super(nombre, apellidos, edad);
         this.idalumno="unknown";
                
    }
    
    

    public String getIdalumno() {
        return idalumno;
    }

    @Override
    public String getNombre() {
        return nombre;
    }

    @Override
    public String getApellidos() {
        return apellidos;
    }

    //metodos propios de la clase
    @Override
    public int getEdad() {
        return edad;
    }

    

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setApellidos(String apellidos) {
        this.apellidos = apellidos;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }
    
    

    @Override
    public String toString() {
        return "" +getNombre()+" "+getApellidos()+" "+getEdad()+" ";            
    }
 
}
```
>Clase Practicante
```sh
package juliana.HerenciaPrincipal;

/**
 *
 * @author julia
 */
public class Practicante extends Persona {
    //Atributos  de la subclase
    private String idpracticante;
    public Practicante (String nombre, String apellidos, int edad, String idpracticante) {
        super(nombre, apellidos, edad);
         this.idpracticante="unknown";
                
    }
    
    //metodos propios de la clase

    public String getIdpracticante() {
        return idpracticante;
    }

    @Override
    public String getNombre() {
        return nombre;
    }

    @Override
    public String getApellidos() {
        return apellidos;
    }

    @Override
    public int getEdad() {
        return edad;
    }

    public void setIdpracticante(String idpracticante) {
        this.idpracticante = idpracticante;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setApellidos(String apellidos) {
        this.apellidos = apellidos;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }

   
    @Override
    public String toString (){
        return "" +getNombre()+" "+getApellidos()+" "+getEdad()+" ";            
    }
}

```
>Clase Profesor
```sh
package juliana.HerenciaPrincipal;

/**
 *
 * @author julia
 */
public class Profesor extends Persona {
    
    //Atributos  de la subclase
    private String idprofesor;
    public Profesor(String nombre, String apellidos, int edad, String idprofesor) {
        super(nombre, apellidos, edad);
         this.idprofesor="unknown";
                
    }
    
    //metodos propios de la clase

    public void setIdprofesor(String idprofesor) {
        this.idprofesor = idprofesor;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setApellidos(String apellidos) {
        this.apellidos = apellidos;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }

    public String getIdprofesor() {
        return idprofesor;
    }

    @Override
    public String getNombre() {
        return nombre;
    }

    @Override
    public String getApellidos() {
        return apellidos;
    }

    /**
     *
     * @return
     */
    @Override
    public int getEdad() {
        return edad;
    }
   
    @Override
    public String toString (){
        return "" +getNombre()+" "+getApellidos()+" "+getEdad()+" ";            
    }
 
    
    
}
```
### CLASE MADRE #2
>Clase vehículo 
```sh
package juliana.HerenciaPrincipal;

/**
 *
 * @author julia
 */

public class Vehiculo
{
  private int numeroRuedas;
  public Vehiculo (int numeroRuedas)
  {
    this.numeroRuedas = numeroRuedas;
  }
}

```
#### CLASE HIJA
>Clase Coche
```sh
package juliana.HerenciaPrincipal;

/**
 *
 * @author julia
 */
class Coche extends Vehiculo
{
  private String marca;
  public Coche (String marca, int numeroRuedas)
  {
    super (numeroRuedas);
    this.marca = marca;
  }
}

```
### CLASE PRINCIPAL
```sh
package juliana.HerenciaPrincipal;

/**
 *
 * @author julia
 */
public class HerenciaPrincipal {
    public static void main(String[] args) {
        Profesor profesor1= new Profesor ("profesor", "mendoza",33, "cuba");
        
        System.out.println(profesor1.toString());
        
        Alumno alumno1= new Alumno("alumno","pardo",15, "manilla");
        System.out.println(alumno1.toString());
        
        Practicante practicante1=  new Practicante ("practicante","torres",19, "Nilo");
        System.out.println(practicante1.toString());
    }
    
}

```

