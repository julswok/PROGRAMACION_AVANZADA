# SOLUCIÓN PARCIAL TERCE CORTE
## CODIGO 
```sh
import java.util.ArrayList;
import java.util.List;

abstract class ConjuntoDeDatos {
    private String nombre;
    private int tamaño;

    public ConjuntoDeDatos(String nombre, int tamaño) {
        this.nombre = nombre;
        this.tamaño = tamaño;
    }

    public abstract String describir();

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public int getTamaño() {
        return tamaño;
    }

    public void setTamaño(int tamaño) {
        this.tamaño = tamaño;
    }
}

class ConjuntoDeDatosTabular extends ConjuntoDeDatos {
    private int numeroDeColumnas;
    private int numeroDeFilas;

    public ConjuntoDeDatosTabular(String nombre, int tamaño, int numeroDeColumnas, int numeroDeFilas) {
        super(nombre, tamaño);
        this.numeroDeColumnas = numeroDeColumnas;
        this.numeroDeFilas = numeroDeFilas;
    }

    @Override
    public String describir() {
        return "Nombre: " + getNombre() + "\n" +
                "Tamaño: " + getTamaño() + "\n" +
                "Tipo: Tabular" + "\n" +
                "Filas: " + numeroDeFilas + "\n" +
                "Columnas: " + numeroDeColumnas;
    }

    public int getNumeroDeColumnas() {
        return numeroDeColumnas;
    }

    public void setNumeroDeColumnas(int numeroDeColumnas) {
        this.numeroDeColumnas = numeroDeColumnas;
    }

    public int getNumeroDeFilas() {
        return numeroDeFilas;
    }

    public void setNumeroDeFilas(int numeroDeFilas) {
        this.numeroDeFilas = numeroDeFilas;
    }
}

class ConjuntoDeDatosImagen extends ConjuntoDeDatos {
    private int ancho;
    private int alto;

    public ConjuntoDeDatosImagen(String nombre, int tamaño, int ancho, int alto) {
        super(nombre, tamaño);
        this.ancho = ancho;
        this.alto = alto;
    }

    @Override
    public String describir() {
        return "Nombre: " + getNombre() + "\n" +
                "Tamaño: " + getTamaño() + "\n" +
                "Tipo: Imagen" + "\n" +
                "Ancho: " + ancho + "\n" +
                "Alto: " + alto;
    }

    public int getAncho() {
        return ancho;
    }

    public void setAncho(int ancho) {
        this.ancho = ancho;
    }

    public int getAlto() {
        return alto;
    }

    public void setAlto(int alto) {
        this.alto = alto;
    }
}

class AnalizadorDeDatos {
    private List<ConjuntoDeDatos> conjuntosDeDatos;

    public AnalizadorDeDatos() {
        this.conjuntosDeDatos = new ArrayList<>();
    }

    public void agregarConjuntoDeDatos(ConjuntoDeDatos conjuntoDeDatos) {
        conjuntosDeDatos.add(conjuntoDeDatos);
    }

    public void eliminarConjuntoDeDatos(String nombre) {
        for (int i = 0; i < conjuntosDeDatos.size(); i++) {
            ConjuntoDeDatos conjunto = conjuntosDeDatos.get(i);
            if (conjunto.getNombre().equals(nombre)) {
                conjuntosDeDatos.remove(i);
                break;
            }
        }
    }

    public List<String> describirConjuntosDeDatos() {
        List<String> descripciones = new ArrayList<>();
        for (ConjuntoDeDatos conjunto : conjuntosDeDatos) {
            descripciones.add(conjunto.describir());
        }
        return descripciones;
    }
}

public class Main {
    public static void main(String[] args) {
        AnalizadorDeDatos analizador = new AnalizadorDeDatos();

        ConjuntoDeDatosTabular conjunto1 = new ConjuntoDeDatosTabular("Datos de estudiantes", 1000, 5, 200);
        ConjuntoDeDatosImagen conjunto2 = new ConjuntoDeDatosImagen("Imágenes de satélite", 2000, 1080, 720);
        ConjuntoDeDatosImagen conjunto3 = new ConjuntoDeDatosImagen("Imágenes de satélite", 2000, 1080, 720);

        analizador.agregarConjuntoDeDatos(conjunto1);
        analizador.agregarConjuntoDeDatos(conjunto2);
        analizador.agregarConjuntoDeDatos(conjunto3);

        List<String> descripciones = analizador.describirConjuntosDeDatos();
        for (String descripcion : descripciones) {
            System.out.println(descripcion);
        }
    }
}

```
## SALIDA
>Nombre: Datos de estudiantes
>Tamaño: 1000
>Tipo: Tabular
>Filas: 200
>Columnas: 5
>Nombre: Imágenes de satélite
>Tamaño: 2000
>Tipo: Imagen
>Ancho: 1080
>Alto: 720
>Nombre: Imágenes de satélite
>Tamaño: 2000
>Tipo: Imagen
>Ancho: 1080
>Alto: 720


