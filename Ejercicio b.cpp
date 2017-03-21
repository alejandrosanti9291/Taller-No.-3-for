/*
Programa: Medir la temperatura.
Autor: Alejandro Santibañez Sanchez
Fecha: 16/04/2017
Resumen: Programa que mide la temperatura cada cuatro horas y determina la menor, mayor y la media.
*/

#include<stdio.h>

int main(){
    float mayor = 0, menor = 9999, media = 0, t;
    int i;
    for(i = 0;i < 24;i += 4){
        printf("Ingrese temperatura %d \n", i);
        scanf("%f", &t);
        if(t > mayor){
            mayor = t;
        }
        if(t < menor){
            menor = t;
        }
        media += t;
    }
    printf("mayor %0.2f \n", mayor);
    printf("menor %0.2f \n", menor);
    printf("media %0.2f \n", media/6);
    return 0;
}
