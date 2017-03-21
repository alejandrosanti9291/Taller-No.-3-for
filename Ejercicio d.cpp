/*
Programa: Calcular un valor
Autor: Alejandro Santibañez Sanchez
Fecha: 16/03/2017
Resumen: Programa que calcula la suma de 2 elevado a la n
*/

#include<stdio.h>
#include<math.h>

intmain(){
    int suma = 0, potencia = 0, i, numero;
    printf("ingrese el valor a sumar \n");
    scanf("%d", &numero);
    for(i = 1; i <= numero; i++) {
        potencia = pow(2 , i);
        suma += potencia;
    }
    printf("la suma total: %d \n",suma);
return 0;
}

