#include <stdio.h>
int cuadrado1(int x);
void cuadrado2(int *x);
void mostrar(int *x);
void invertir(int *a,int *b);
void ordenar(int *num1,int *num2);
int main(){
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d",&num);
    /*printf("\nEl cuadrado de %d es: %d",num,cuadrado1(num));
    printf("\nEl cuadrado de %d es: ");
    cuadrado2(&num);
    printf("%d",num);*/
    mostrar(&num);

    
    /*int n1,n2;
    printf("Ingrese un numero: ");
    scanf("%d",&n1);
    printf("Ingrese otro numero: ");
    scanf("%d",&n2);
    ordenar(&n1,&n2);
    printf("Mayor: %d\nMenor: %d",n1,n2);*/
    return 0;
}

int cuadrado1(int x){
    return (x*x);
}

void cuadrado2(int *x){
    *x=(*x)*(*x);

}

void mostrar(int *x){
    printf("\nDireccion de la variable: %d",x);
    printf("\nContenido de la variable: %d",*x);
}

void invertir(int *a,int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
void ordenar(int *num1,int *num2){
    int aux;
    if (*num1<*num2)
    {
        invertir(num1,num2);
    }
}