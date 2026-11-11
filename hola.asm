org 100h  ;Indica que el programa empieza aqui

mov ah, 09h  ;Indica que quiere imprimir texto
mov dx, offset msg  ;Indica en donde esta guardado el texto

int 21h  ;Imprime el texto

ret  ;Fin del programa

msg db "Hola Mundo", "$" ;Define el mensaje y el $ marca el final del mensaje