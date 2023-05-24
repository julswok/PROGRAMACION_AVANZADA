package tallerpoliherencias;

/**
 *
 * @author julia
 */
public abstract class ProductoElectronico {
   private String nombre;
  private double Precio;
  private int garantia; 
  

    public String getNombre() {
        return nombre;
    }

    public double getPrecio() {
        return Precio;
    }

    public int getGarantia() {
        return garantia;
    }

   
//Constructor
     public ProductoElectronico(String nombre, double Precio, int garantia) {
        this.nombre = nombre;
        this.Precio = Precio;
        this.garantia = garantia;
       
    }
     
    //Método de carga con parametro de carga inicial
     
     public void cargar (int CargaInicial){
      }

}


package tallerpoliherencias;

public class Celular extends ProductoElectronico {
    private int calidadCamara;
    private String color;
    private double capacidadBateria;

    public Celular(int calidadCamara, String color, double capacidadBateria, String nombre, double precio, int garantia) {
        super(nombre, precio, garantia);
        this.calidadCamara = calidadCamara;
        this.color = color;
        this.capacidadBateria = capacidadBateria;
    }

    public int getCalidadCamara() {
        return calidadCamara;
    }

    public void setCalidadCamara(int calidadCamara) {
        this.calidadCamara = calidadCamara;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public double getCapacidadBateria() {
        return capacidadBateria;
    }

    public void setCapacidadBateria(double capacidadBateria) {
        this.capacidadBateria = capacidadBateria;
    }

    @Override
    public void cargar(int cargaInicial) {
        System.out.println("Cargando celular " + getNombre() + ". Tiempo de carga: " + cargaInicial + " minutos.");
    }

    public void llamada(String numero) {
        System.out.println("Llamando a " + numero);
    }

    public void tomarFoto(String cantFotos) {
        System.out.println("Tomando " + cantFotos + " fotos");
    }

    @Override
    public String toString() {
        return "Celular{" +
                "nombre='" + getNombre() + '\'' +
                ", precio=" + getPrecio() +
                ", garantia=" + getGarantia() +
                ", calidadCamara=" + calidadCamara +
                ", color='" + color + '\'' +
                ", capacidadBateria=" + capacidadBateria +
                '}';
    }
}

package tallerpoliherencias;

public class Computador extends ProductoElectronico {
    private int RAM;
    private String procesador;
    private double tamanoPantalla;

    public Computador(int RAM, String procesador, double tamanoPantalla, String nombre, double precio, int garantia) {
        super(nombre, precio, garantia);
        this.RAM = RAM;
        this.procesador = procesador;
        this.tamanoPantalla = tamanoPantalla;
    }

    public int getRAM() {
        return RAM;
    }

    public void setRAM(int RAM) {
        this.RAM = RAM;
    }

    public String getProcesador() {
        return procesador;
    }

    public void setProcesador(String procesador) {
        this.procesador = procesador;
    }

    public double getTamanoPantalla() {
        return tamanoPantalla;
    }

    public void setTamanoPantalla(double tamanoPantalla) {
        this.tamanoPantalla = tamanoPantalla;
    }

    @Override
    public void cargar(int cargaInicial) {
        System.out.println("Cargando computador " + getNombre() + ". Tiempo de carga: " + cargaInicial + " minutos.");
    }

    public void encender(String nombre) {
        System.out.println(nombre + " está encendiendo");
    }

    public void actualizar() {
        System.out.println("Actualizando " + getNombre());
    }

    @Override
    public String toString() {
        return "Computador{" +
                "nombre='" + getNombre() + '\'' +
                ", precio=" + getPrecio() +
                ", garantia=" + getGarantia() +
                ", RAM=" + RAM +
                ", procesador='" + procesador + '\'' +
                ", tamanoPantalla=" + tamanoPantalla +
                '}';
    }
}

package tallerpoliherencias;

import java.util.ArrayList;
import java.util.Scanner;

public class TallerPoliHerencias {

    public static void main(String[] args) {
        ArrayList<ProductoElectronico> listaProductos = new ArrayList<ProductoElectronico>();
        listaProductos.add(new Celular(12, "Negro", 4000, "Samsung Galaxy", 999.99, 1));
        listaProductos.add(new Computador(8, "Intel Core i5", 15.6, "Lenovo", 1499.99, 2));

        int op, op2;
        op2 = 1;
        Scanner e = new Scanner(System.in);
        do {
            System.out.println("1. Agregar celular");
            System.out.println("2. Agregar computador");
            System.out.println("3. Ver comportamiento productos");
            System.out.println("4. Ver todos los productos");
            System.out.println("0. Salir");
            System.out.print("Ingrese una opción: ");
            op = e.nextInt();

            switch (op) {
                case 1:
                    while (op2 != 0) {
                        System.out.print("Ingrese calidad de cámara: ");
                        int calidadCamara = e.nextInt();
                        e.nextLine();  // Consume newline left-over
                        System.out.print("Ingrese color: ");
                        String color = e.nextLine();
                        System.out.print("Ingrese capacidad de batería: ");
                        double capacidadBateria = e.nextDouble();
                        e.nextLine();  // Consume newline left-over
                        System.out.print("Ingrese nombre: ");
                        String nombre = e.nextLine();
                        System.out.print("Ingrese precio: ");
                        double precio = e.nextDouble();
                        System.out.print("Ingrese garantía: ");
                        int garantia = e.nextInt();
                        listaProductos.add(new Celular(calidadCamara, color, capacidadBateria, nombre, precio, garantia));
                        System.out.println("Celular agregado!");
                        System.out.println("Desea agregar otro celular? Presione 0 para NO, 1 para SI");
                        op2 = e.nextInt();
                        e.nextLine();  // Consume newline left-over
                    }
                    break;
                case 2:
                    while (op2 != 0) {
                        System.out.print("Ingrese RAM: ");
                        int RAM = e.nextInt();
                        e.nextLine();  // Consume newline left-over
                        System.out.print("Ingrese procesador: ");
                        String procesador = e.nextLine();
                        System.out.print("Ingrese tamaño de pantalla: ");
                        double tamanoPantalla = e.nextDouble();
                        e.nextLine();  // Consume newline left-over
                        System.out.print("Ingrese nombre: ");
                        String nombre = e.nextLine();
                        System.out.print("Ingrese precio: ");
                        double precio = e.nextDouble();
                        System.out.print("Ingrese garantía: ");
                        int garantia = e.nextInt();
                        listaProductos.add(new Computador(RAM, procesador, tamanoPantalla, nombre, precio, garantia));
                        System.out.println("Computador agregado!");
                        System.out.println("Desea agregar otro computador? Presione 0 para NO, 1 para SI");
                        op2 = e.nextInt();
                        e.nextLine();  // Consume newline left-over
                    }
                    break;
                case 3:
                    for (ProductoElectronico producto : listaProductos) {
                        if (producto instanceof Celular) {
                            System.out.println("CELULARES:");
                            Celular celular = (Celular) producto;
                            celular.llamada("61151555");
                            celular.tomarFoto("5");
                        } else if (producto instanceof Computador) {
                            System.out.println("COMPUTADORES");
                            Computador computador = (Computador) producto;
                            computador.encender(producto.getNombre());
                            computador.actualizar();
                        }
                    }
                    break;
                case 4:
                    for (ProductoElectronico producto : listaProductos) {
                        System.out.println(producto.toString());
                    }
                    break;
            }
        } while (op != 0);
    }
}




