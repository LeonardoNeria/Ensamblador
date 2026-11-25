;""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
; Asignatura: Lenguaje ensamblador (Clave: 33172, ciclo: tres)
; Sesión 2: Práctica de Registro, Operaciones y Banderas en arquitectura x86
; Entorno compartible: MASM/TASM en un Framework
;""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

.MODEL SMALL ;Define el modelo de memoria pequeño (1 segmento de coo y 1 de datos)
.STACK 100h  ;Reserva 256 bytes (100h) en la memoria RAM para la pila 
.DATA        ;''''''''''''''''''''''''''''''''''''''''''''''''''''''''
             ;Sección de datos (variabless del programa)
             ;''''''''''''''''''''''''''''''''''''''''''''''''''''''''
             ;Ejercicio 5: Declaración de una variable de tipo byte (DB = Define Byte)
variable DB 0FEh ;Guarda ek valor hexadecimal FEh en la memoria de datos
.CODE        ;'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
             ;Sección de código (instrucciones ejecutables)
             ;''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
MAIN PROC    ;''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
             ;Inicialización obligatoria del segmento de datos (DS)
             ;''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
MOV AX, @DATA ;Carga en la sección base donde inicia la sección DATA
MOV DS, AX ;Mueve esa direccion al registro segmento DS (data segment)
            ;'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
            ;Actividad 1: Descompisicion de registros de 16 bits en 8 bits (AH/AL, BH/BL)
            ;''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
MOV BX, 0A4F2h ; Crga AAF2h en el registro BX (16 bits)
            ;INTERNAMENTE: BG guarda la parte alta (AAh) y BL guarda la parte baja (F2h)
            ;Nota: Se coloca un '0' al inicio (0A4F2h) para que el ensamblador entienda que es un numero
            ; hexadecimal y no una variable
MOV BL, 05h ; Modifica unicamente la mitad baja (BL) con el valor 05h
             ; La mitad alta (BH) no cambia y se mantiene en A4h
             ;Resultado final acumulado en BX = A405h
             ;'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
            ;Actividad 3:
MAIN ENDP
END MAIN ; Fin de la definicion del procedimiento principal y del archivo
