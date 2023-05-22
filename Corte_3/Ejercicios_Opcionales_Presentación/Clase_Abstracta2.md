## EJERCICIO OPCIONAL
Estás desarrollando un programa para una tienda de productos electrónicos. Tienes diferentes tipos de productos, como televisores, smartphones y computadoras. Cada uno de ellos tiene algunas características comunes, como el precio, la marca y la descripción.
Crea una clase abstracta llamada "ProductoElectronico" que contenga los atributos comunes a todos los productos electrónicos, como el precio, la marca y la descripción. Esta clase debe tener un método abstracto llamado "caleularDescuento" que calculo el descuento aplicable al producto. Crea clases derivadas de "ProductoElectronico" para cada tipo de producto específico, "Televisor", "Smartphone" y
"Computadora". Estas clases deben implementar el método abstracto "calcularDescuento" de acuerdo con las reglas específicas de descuento para cada tipo de producto.
Los televisores tienen un descuento fijo del 10%, mientras que los smartphones un descuento del 5% sobre el precio actual y las computadoras 15%. Crea una clase principal llamada "TiendaElectronica" donde puedas crear instancias de diferentes productos electrónicos y mostrar su información, incluido el
descuento aplicable.
# CÓDIGO 
```sh
// Definición de la clase abstracta ProductoElectronico
abstract class ProductoElectronico {
    private double precio; // Precio del producto
    private String marca; // Marca del producto
    private String descripcion; // Descripción del producto

    // Constructor de la clase ProductoElectronico
    public ProductoElectronico(double precio, String marca, String descripcion) {
        this.precio = precio;
        this.marca = marca;
        this.descripcion = descripcion;
    }

    // Método para obtener el precio del producto
    public double getPrecio() {
        return precio;
    }

    // Método para obtener la marca del producto
    public String getMarca() {
        return marca;
    }

    // Método para obtener la descripción del producto
    public String getDescripcion() {
        return descripcion;
    }

    // Método abstracto para calcular el descuento aplicable al producto
    public abstract double calcularDescuento();
}

// Clase Televisor que extiende de ProductoElectronico
class Televisor extends ProductoElectronico {
    // Constructor de la clase Televisor
    public Televisor(double precio, String marca, String descripcion) {
        super(precio, marca, descripcion);
    }

    // Implementación del método calcularDescuento para Televisor
    @Override
    public double calcularDescuento() {
        return getPrecio() * 0.1; // Descuento fijo del 10%
    }
}

// Clase Smartphone que extiende de ProductoElectronico
class Smartphone extends ProductoElectronico {
    // Constructor de la clase Smartphone
    public Smartphone(double precio, String marca, String descripcion) {
        super(precio, marca, descripcion);
    }

    // Implementación del método calcularDescuento para Smartphone
    @Override
    public double calcularDescuento() {
        return getPrecio() * 0.05; // Descuento del 5% sobre el precio actual
    }
}

// Clase Computadora que extiende de ProductoElectronico
class Computadora extends ProductoElectronico {
    // Constructor de la clase Computadora
    public Computadora(double precio, String marca, String descripcion) {
        super(precio, marca, descripcion);
    }

    // Implementación del método calcularDescuento para Computadora
    @Override
    public double calcularDescuento() {
        return getPrecio() * 0.15; // Descuento del 15% sobre el precio actual
    }
}

// Clase principal TiendaElectronica
public class TiendaElectronica {
    public static void main(String[] args) {
        // Creación de instancias de diferentes productos electrónicos
        Televisor televisor = new Televisor(1000, "Sony", "Televisor LED");
        Smartphone smartphone = new Smartphone(500, "Samsung", "Smartphone Android");
        Computadora computadora = new Computadora(1500, "HP", "Computadora portátil");

        // Mostrar información de los productos y el descuento aplicable
        System.out.println("Televisor");
        System.out.println("Marca: " + televisor.getMarca());
        System.out.println("Descripción: " + televisor.getDescripcion());
        System.out.println("Precio: $" + televisor.getPrecio());
        System.out.println("Descuento: $" + televisor.calcularDescuento());
        System.out.println();

        System.out.println("Smartphone");
        System.out.println("Marca: " + smartphone.getMarca());
        System.out.println("Descripción: " + smartphone.getDescripcion());
        System.out.println("Precio: $" + smartphone.getPrecio());
        System.out.println("Descuento: $" + smartphone.calcularDescuento());
        System.out.println();

        System.out.println("Computadora");
        System.out.println("Marca: " + computadora.getMarca());
        System.out.println("Descripción: " + computadora.getDescripcion());
        System.out.println("Precio: $" + computadora.getPrecio());
        System.out.println("Descuento: $" + computadora.calcularDescuento());
    }
}
```
# SALIDA
>Televisor
>Marca: Sony
>Descripción: Televisor LED
>Precio: $1000.0
>Descuento: $100.0

>Smartphone
>Marca: Samsung
>Descripción: Smartphone Android
>Precio: $500.0
>Descuento: $25.0

>Computadora
>Marca: HP
>Descripción: Computadora portátil
>Precio: $1500.0
>Descuento: $225.0

