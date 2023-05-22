# JUEGO JAVA SNAKE
## CÓDIGO
```sh
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class SnakeGame extends JFrame implements ActionListener, KeyListener {

    private static final int WIDTH = 400;  // Ancho de la ventana del juego
    private static final int HEIGHT = 400; // Alto de la ventana del juego
    private static final int UNIT_SIZE = 20; // Tamaño de cada unidad del juego
    private static final int GAME_UNITS = (WIDTH * HEIGHT) / (UNIT_SIZE * UNIT_SIZE); // Número total de unidades en el juego
    private static final int DELAY = 75; // Retardo de actualización del juego

    private int[] x = new int[GAME_UNITS]; // Coordenadas X de cada parte del cuerpo de la serpiente
    private int[] y = new int[GAME_UNITS]; // Coordenadas Y de cada parte del cuerpo de la serpiente
    private int bodyParts = 6; // Número inicial de partes del cuerpo de la serpiente
    private int applesEaten = 0; // Número de manzanas comidas por la serpiente
    private int appleX; // Coordenada X de la manzana
    private int appleY; // Coordenada Y de la manzana
    private char direction = 'R'; // Dirección inicial de movimiento de la serpiente
    private boolean running = false; // Estado del juego

    private Timer timer;

    public SnakeGame() {
        setTitle("Snake Game");
        setSize(WIDTH, HEIGHT);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setResizable(false);
        setVisible(true);
        addKeyListener(this);

        startGame();
    }

    private void startGame() {
        running = true;
        spawnApple(); // Generar una nueva manzana
        timer = new Timer(DELAY, this);
        timer.start();
    }

    private void spawnApple() {
        // Generar coordenadas aleatorias para la manzana dentro de los límites del juego
        appleX = (int) (Math.random() * (WIDTH / UNIT_SIZE)) * UNIT_SIZE;
        appleY = (int) (Math.random() * (HEIGHT / UNIT_SIZE)) * UNIT_SIZE;
    }

    private void move() {
        // Mover el cuerpo de la serpiente
        for (int i = bodyParts; i > 0; i--) {
            x[i] = x[i - 1];
            y[i] = y[i - 1];
        }

        // Mover la cabeza de la serpiente en la dirección adecuada
        switch (direction) {
            case 'U':
                y[0] -= UNIT_SIZE;
                break;
            case 'D':
                y[0] += UNIT_SIZE;
                break;
            case 'L':
                x[0] -= UNIT_SIZE;
                break;
            case 'R':
                x[0] += UNIT_SIZE;
                break;
        }
    }

    private void checkApple() {
        // Verificar si la serpiente ha alcanzado la manzana
        if (x[0] == appleX && y[0] == appleY) {
            bodyParts++; // Incrementar el tamaño de la serpiente
            applesEaten++; // Incrementar el número de manzanas comidas
            spawnApple(); // Generar una nueva manzana
        }
    }

    private void checkCollision() {
       // Verificar si la serpiente ha chocado con los límites del juego o consigo misma
        // Verificar colisión con los límites del juego
        if (x[0] < 0 || x[0] >= WIDTH || y[0] < 0 || y[0] >= HEIGHT) {
            running = false;
        }

        // Verificar colisión con el cuerpo de la serpiente
        for (int i = 1; i < bodyParts; i++) {
            if (x[0] == x[i] && y[0] == y[i]) {
                running = false;
                break;
            }
        }

        // Detener el juego si hay una colisión
        if (!running) {
            timer.stop();
        }
    }

    private void gameOver(Graphics g) {
        // Mostrar mensaje de fin de juego y puntaje obtenido
        String message = "Game Over";
        String scoreMessage = "Score: " + applesEaten;
        Font font = new Font("Times New Roman", Font.BOLD, 30);
        FontMetrics metrics = getFontMetrics(font);

        g.setColor(Color.RED);
        g.setFont(font);
        g.drawString(message, (WIDTH - metrics.stringWidth(message)) / 2, HEIGHT / 2 - 30);
        g.drawString(scoreMessage, (WIDTH - metrics.stringWidth(scoreMessage)) / 2, HEIGHT / 2);
    }

    @Override
    public void paint(Graphics g) {
        // Dibujar el juego en cada actualización
        super.paint(g);

        // Dibujar el campo de juego
        for (int i = 0; i < WIDTH / UNIT_SIZE; i++) {
            g.drawLine(i * UNIT_SIZE, 0, i * UNIT_SIZE, HEIGHT);
        }
        for (int i = 0; i < HEIGHT / UNIT_SIZE; i++) {
            g.drawLine(0, i * UNIT_SIZE, WIDTH, i * UNIT_SIZE);
        }

        // Dibujar la manzana
        g.setColor(Color.RED);
        g.fillOval(appleX, appleY, UNIT_SIZE, UNIT_SIZE);

        // Dibujar la serpiente
        for (int i = 0; i < bodyParts; i++) {
            if (i == 0) {
                g.setColor(Color.GREEN);
            } else {
                g.setColor(Color.YELLOW);
            }
            g.fillRect(x[i], y[i], UNIT_SIZE, UNIT_SIZE);
        }

        // Mostrar el puntaje actual
        g.setColor(Color.BLUE);
        g.setFont(new Font("Arial", Font.BOLD, 20));
        g.drawString("Score: " + applesEaten, 10, 20);

        // Mostrar mensaje de fin de juego si el juego ha terminado
        if (!running) {
            gameOver(g);
        }
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (running) {
            move();
            checkApple();
            checkCollision();
        }
        repaint();
    }

    @Override
    public void keyPressed(KeyEvent e) {
        // Cambiar la dirección de movimiento de la serpiente según la tecla presionada
        switch (e.getKeyCode()) {
            case KeyEvent.VK_UP:
                if (direction != 'D') {
                    direction = 'U';
                }
                break;
            case KeyEvent.VK_DOWN:
                if (direction != 'U') {
                    direction = 'D';
                }
                break;
            case KeyEvent.VK_LEFT:
                if (direction != 'R') {
                    direction = 'L';
                }
                break;
            case KeyEvent.VK_RIGHT:
                if (direction != 'L') {
                    direction = 'R';
                }
                break;
        }
    }

    // Métodos sin utilizar pero necesarios para implementar la interfaz KeyListener
    @Override
    public void keyTyped(KeyEvent e) {
    }

    @Override
    public void keyReleased(KeyEvent e) {
    }

    public static void main(String[] args) {
        new SnakeGame();
    }
}



```

## SALIDA SNAKE

+-----------------------------------------------------------+
|                        Score: 3                           |
|                                                           |
|                                                           |
|                                                           |
|                         O                                 |
|                         █                                 |
|                         █                                 |
|                                                           |
|                                                           |
|                                                           |
|                                                           |
+-----------------------------------------------------------+
