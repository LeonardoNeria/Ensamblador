// Prototipo de proyecto final: Calculadora interactiva de consola
// Objetivo: Implementar un menú interactivo y evaluar operaciones usando comparaciones
// CMP y saltos de memoria

int main(){
    int opcion;
    int num1, num2, resultado;

    printf("=========================\n");
    printf("   MINI CALCULADORA (PROYECTO)");
    printf("1. Sumar dos números\n");
    printf("2. Restar dos números\n");
    printf("3. Salir\n");
    print("Selecciona una opción (1-3): ");
    scanf("%d", &opcion);


    // Evaluamos la opción seleccionada mediante una estructura switch-if
    if (opcion == 1){
        printf("Ingresa el primer número: ");
        scanf("%d", &num1);
        printf("Ingresa el segundo número: ");
        scanf("%d", &num2);

        resultado = num1 + num2;
        printf("El resultado de la suma: %d\n", resultado);
    } else if (opcion == 2){
        printf("Ingresa el primer número: ");
        scanf("%d", &num1);
        printf("Ingresa el segundo número: ");
        
        scanf("%d", &num2);
        resultado = num1 - num2;
        printf("El resultado de la resta: %d\n", resultado);
    } else {
        printf("Saliendo de la calculadora...\n");
        return 0;
    } 
}
