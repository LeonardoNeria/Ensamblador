// Ejercicio 3: Operaciones lógicas y de manipulación de bits
// Objetivo: Identificar las instrucciones INC, DEC, AND, XOR a nivel de registros

#include <stdio.h>
int main(){
    // Incremento y decremento
    int contador = 10;
    
    contador++; // En ensamblador esto se convierte en la instrucción INC (increment)
    contador--; // En ensamblador esto se convierte en la instrucción DEC (decrement)

    // Parte B: Operaciones lógicas a nivel de bits
    int x = 12; // En binario es: 0000 1100
    int y = 10; // En binario es: 0000 1010

    // Operación AND (&): Da 1 solo donde ambos bits son 1
    //   0000 1100 (12)
    // & 0000 1010 (10)
    // ----------------
    // 0000 1000 (8)
    int resultado_and = x & y;

    // Operación XOR (^): Da 1 donde los bits sean diferentes
    // 0000 1100 (12)
    // ^ 0000 1010 (10)
    // ----------------
    // 0000 0110 (6 decimal)
    int resultado_xor = x ^ y;
    
    printf("Resultado AND (bit a bit): %d\n", resultado_and);
    printf("Resultado XOR (bit a bit): %d\n", resultado_xor);

    return 0;

}