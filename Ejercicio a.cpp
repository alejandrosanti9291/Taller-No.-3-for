/*
Programa: Calcule y muestre una salida.
Autor: Alejandro Santibañez Sanchez
Fecha: 16/03/2017
Resumen: programa que calcula y muestra la suma de los cuadrados de los 10 primero enteros mayores que cero
*/

#include<stdio.h>
intmain () {
    int i, suma = 0, cuadrado;
    for(i = 1; i <= 10; i++) {
        cuadrado = i * i;
        suma += cuadrado;
    }
      printf ("%d \n", suma);
      return 0;
}
