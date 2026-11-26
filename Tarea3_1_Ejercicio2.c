// Ejercicio 2: Ejercicio de Lógica de Bits:  Utilice las instrucciones lógicas AND, OR y XOR para:
// Borrar los 4 bits menos significativos del registro AL.
//# Activar el bit 7 del registro BL.

#include <stdio.h>
int main(){
    unsigned char al_resultado, bl_resultado;

    __asm__(
        "movb $0xB6, %%al \n\t" // Valor inicial de AL
        "andb $0xF0, %%al \n\t" // Mascara de AND
        "movb $0x05, %%bl \n\t" // Valor inicial de BL
        "orb $0x80, %%bl \n\t" // Mascara de OR
        "movb %%al, %0 \n\t"
        "movb %%bl, %1 \n\t"
        : "=&q" (al_resultado), "=&q" (bl_resultado)
        :
        : "al", "bl"
    );

    printf("AL = 0x%02X\nBL = 0x%02X\n", al_resultado, bl_resultado);
    return 0;
}