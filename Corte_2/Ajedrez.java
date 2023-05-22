/*  EJERCICIO QUE SE DEJÓ COMO TAREA Y SE ENTREGÓ A LA PLATAFORMA. SE HACE USO DE ARRAYLIST Y SORT*/
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

// Clase para representar a un jugador de ajedrez
class JugadorAjedrez {
  // Atributos privados
  private String nombre;
  private int elo;
  private int edad;
  private int valorPremio;

  // Constructor para inicializar los atributos
  public JugadorAjedrez(String nombre, int elo, int edad, int valorPremio) {
    this.nombre = nombre;
    this.elo = elo;
    this.edad = edad;
    this.valorPremio = valorPremio;
  }
  public String getNombre() {
    return nombre;
  }

  public int getElo() {
    return elo;
  }

  public int getEdad() {
    return edad;
  }

  public int getValorPremio() {
    return valorPremio;
  }

  // Método para presentar los datos del jugador en un formato legible
  public String presentarDatos() {
    return "(" + getNombre() + ", ELO: " + getElo() + ", Edad: " + getEdad() + ", Valor del premio: " + getValorPremio() + ")";
  }
}

// Comparador para ordenar jugadores por ELO
class CompararEloJugador implements Comparator<JugadorAjedrez> {
  public int compare(JugadorAjedrez jugador1, JugadorAjedrez jugador2) {
    return jugador1.getElo() - jugador2.getElo();
  }
}

// Comparador para ordenar jugadores por edad
class CompararEdadJugador implements Comparator<JugadorAjedrez> {
  public int compare(JugadorAjedrez jugador1, JugadorAjedrez jugador2) {
    return jugador1.getEdad() - jugador2.getEdad();
  }
}

// Comparador para ordenar jugadores por valor del premio
class CompararValorPremioJugador implements Comparator<JugadorAjedrez> {
  public int compare(JugadorAjedrez jugador1, JugadorAjedrez jugador2) {
    return jugador1.getValorPremio() - jugador2.getValorPremio();
  }
}

// Clase principal para ejecutar el programa
 public class Planilla {
  public static void main(String[] args) {
    // Crear una lista de jugadores de ajedrez
    ArrayList<JugadorAjedrez> listaJugadores = new ArrayList<JugadorAjedrez>();
    // Agregar jugadores a la lista
    listaJugadores.add(new JugadorAjedrez("Ana", 2500, 25, 1000));
    listaJugadores.add(new JugadorAjedrez("Luis", 2400, 30, 2000));
    listaJugadores.add(new JugadorAjedrez("Carlos", 2700, 20, 3000));
    listaJugadores.add(new JugadorAjedrez("Marta", 2600, 35, 4000));
    listaJugadores.add(new JugadorAjedrez("David", 2800, 40, 5000));
    listaJugadores.add(new JugadorAjedrez("Julia", 2300, 45, 6000));
    listaJugadores.add(new JugadorAjedrez("Fernando", 2200, 50, 7000));

    // Mostrar la lista sin ordenar
System.out.println("Lista de jugadores sin ordenar:");
for (JugadorAjedrez jugador : listaJugadores) {
  System.out.println(jugador.presentarDatos());
}

// Ordenar y mostrar la lista de jugadores por ELO
Collections.sort(listaJugadores, new CompararEloJugador());
System.out.println("Lista de jugadores ordenados por ELO:");
for (JugadorAjedrez jugador : listaJugadores) {
  System.out.println(jugador.presentarDatos());
}

// Ordenar y mostrar la lista de jugadores por edad
Collections.sort(listaJugadores, new CompararEdadJugador());
System.out.println("Lista de jugadores ordenados por edad:");
for (JugadorAjedrez jugador : listaJugadores) {
  System.out.println(jugador.presentarDatos());
}

// Ordenar y mostrar la lista de jugadores por valor del premio
Collections.sort(listaJugadores, new CompararValorPremioJugador());
System.out.println("Lista de jugadores ordenados por valor del premio:");
for (JugadorAjedrez jugador : listaJugadores) {
  System.out.println(jugador.presentarDatos());
}
  }
}
