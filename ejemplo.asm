
.model small            ; Define el modelo de memoria "small": un segmento de
                        ; codigo y un segmento de datos, cada uno de hasta 64 KB

.stack 100h             ; Reserva un segmento de pila de 100h bytes (256 bytes).
                        ; La pila guarda direcciones de retorno y datos temporales

.data                   ; Inicio del segmento de datos.
                        ; Esta vacio porque el programa no declara variables

.code                   ; Inicio del segmento de codigo (aqui van las instrucciones)

main proc               ; Inicio del procedimiento principal llamado "main"

    mov ax, @data       ; @data es la direccion del segmento de datos.
                        ; Se carga primero en AX porque no se puede mover un
                        ; valor inmediato directamente a un registro de segmento

    mov ds, ax          ; Copia AX en DS para inicializarlo: asi DS apunta al
                        ; segmento de datos del programa

    mov al, 25h         ; Transfiere el valor inmediato 25h (37 decimal) al
                        ; registro AL (parte baja de AX). Resultado: AL = 25h

    mov bl, 10h         ; Transfiere el valor inmediato 10h (16 decimal) al
                        ; registro BL (parte baja de BX). Resultado: BL = 10h

    mov ah, 4Ch         ; Selecciona la funcion 4Ch de DOS: terminar programa.
                        ; Solo modifica AH, por lo que AL conserva el valor 25h

    int 21h             ; Llama a la interrupcion 21h del DOS, que ejecuta la
                        ; funcion indicada en AH (aqui, finalizar y regresar a DOS)

main endp               ; Fin del procedimiento "main"

end main                ; Fin del programa e indica que la ejecucion comienza
                        ; en la etiqueta "main"
