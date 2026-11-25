// Ejercicio 2.1: Resta de variables y regitros en ensamblador
// Objetivo: Entender como el compilador convierte variables en direcciones de memoria RAM
// Y como se usa la CPU para operar

#include <stdio.h> // Libreria estándar para imprimir en pantalla

int main() {
    // 1. Declaración e inicialización de variables
    int x=20; // Se reserva espacio en memoria RAM para X y se le asigna 20
    int y=5;  // Se reserva espacio en memoria RAM para Y y se le asigna 5

    // 2. Operación de resta
    // A nivel de hardware, la CPU no puede restar directamente de memoria a memoria 
    // Primero debe cargar un valor a un REGISTRO del procesador
    int resultado = x - y;

    // 3. Impresión del resultado
    printf("El resultado de %d - %d es: %d\n", x, y,resultado);

    return 0; // Indica que el programa terminó correctamente
}