// Ejercicio 2.2: Manipulación directa de registros EAX y EBX
// Objetivo: Escribir instrucciones mnemotécnicas directas dentro de C
#include <stdio.h>
int main(){

    int num1 = 12; // Primer número a sumar
    int num2 = 8; // Segundo número a sumar
    int suma; // Variable donde guardaremos el resultado final

    // Inicio del bloque de lenguaje ensamblador embebido
    __asm__ (
        "movl %1, %%eax;" // Mueve el contenido de num1 al registro EAX
        "addl %2, %%eax;" // Suma el valor de num2 al registro EAX
        "movl %%eax, %0;" // Mueve el resultado de EAX a la variable suma
        : "=r" (suma)     // Salida: suma
        : "r" (num1), "r" (num2) // Entradas: num1 y num2
        : "%eax"          // Clobbered register: EAX
    );
    // Fin del bloque de lenguaje ensamblador embebido
    printf("Demostración en Registros CPU:\n");
    printf("Registros EAX (%d) + Registros EBX (%d) = Resultado (%d)\n", num1, num2, suma);

}