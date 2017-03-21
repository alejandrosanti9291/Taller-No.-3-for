/*
Programa: Calcula el valor de una suma.
Autor: Alejandro Santibañes Sanchez
Fecha: 16/03/2017
Resumen: Programa que suma los valores de 1 a n
*/

#include<stdio.h>

intmain(){
    int suma = 0, numero, i;
    printf ("ingrese el limite de numeros \n");
    scanf ("%d", &numero);
    for (i = 1; i <= numero; i++) {
        suma += i;
    }
    printf("la sresultado es: %d \n",suma);
    return 0;
}
