// Ejercicio 1: Ejercicio Aritmético Escribir una secuencia de instrucciones en ensamblador que evalúe la expresión matemática  
// R = (A + B) - C, asignando los valores numéricos  A = 15,  B = 10 y C = 8 a los registros seleccionados.

#include <stdio.h>

int main(){
    int A = 15; // Valor de A
    int B = 10; // Valor de B
    int C = 8;  // Valor de C
    int R;      // Valor de R

    // Inicio del bloque de lenguaje ensamblador embebido
    __asm__(
        "movl %1, %%eax;" // Mueve el valor de A al registro EAX
        "movl %2, %%ebx;" // Mueve el valor de B al registro EBX
        "movl %3, %%ecx;" // Mueve el valor de C al registro ECX
        "addl %%ebx, %%eax;" // Suma el valor de EAX (A) al registro EBX (B)
        "subl %%ecx, %%eax;" // Resta el valor de ECX (C) al registro EAX (A + B)
        "movl %%eax, %0;" // Mueve el resultado de EAX a la variable R
        : "=&r" (R) // Salida: R
        :"r" (A), "r" (B), "r" (C) // Entradas: A, B, C
        : "%eax", "%ebx", "%ecx" // Clobbered registers: EAX, EBX, ECX
    );
    // Fin del bloque de lenguaje ensamblador embebido
    printf("El resultado de la expresión R = (A + B) - C es: %d\n", R);
    return 0;
}
