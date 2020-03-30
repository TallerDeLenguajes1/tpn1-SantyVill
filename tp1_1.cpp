#include <stdio.h>

int main(){
    int a,*p_a;
    p_a=&a;
    a=25;
    printf("\nContenido del puntero: %d",*p_a);
    printf("\nDireccion de memoria almacenada por el puntero: %d",p_a);
    printf("\nDireccion de memoria de la variable: %d",&a);
    printf("\nDireccion de memoria del puntero: %d",&p_a);
    printf("\nTamanio usado por la variable: %d",sizeof(a));
    getchar();
    return 0;
}