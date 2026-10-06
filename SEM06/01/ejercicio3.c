#include <stdio.h>

int main (){
    int cantidad = 200;

    int *ptr; // se define ptr com opuntero 
              // es una varibale que opera con direccion de memoria 
              // inicialmente apunta a qalgun lugar de la memoria (tiene un lugar de memoria)
    /*Regla: Si se crea el puntero se requiere inicializar antes de usar */

    ptr = NULL;
    // ---- despues de muchas lineas
    if(ptr == NULL){
        ptr = &cantidad;
        printf("Puntero inicializado, su direccion es %p y su valor es %d", ptr, *ptr);
    }else{
        printf("El puntero ya tiene memoria, no es necesario inicializar\n");
    }
}