// Ejercicio 3: Utilice mnemónicos de manipulación de cadenas (MOVSB o LODSB) para transferir una cadena de 5 caracteres 
// desde un segmento fuente a un segmento destino.

#include <stdio.h>
int main(){
    char origen[] = "Hola"; // Varible origen con cadena de caracteres (5)
    char destino[5]; // Variable destino
    void *src = origen; // Copia hasta el 0
    void *dst = destino;
    int n = 5; // incluye el 0

    __asm__(
        "cld \n\t" // Recorre hacia delante
        "rep movsb \n\t" // Mueve string en bytes [ESI] a [EDI] 
        : "+S" (src), "+D" (dst), "+c" (n)
        :
        : "memory"
    );

    printf("%s\n", destino);
    return 0;
}