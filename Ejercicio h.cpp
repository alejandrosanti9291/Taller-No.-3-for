/*
Programa: Calule la descomposicion  en factores primos  de un numero entero.
Autor: Alejandro Santibañez Sanchez.
Fecha: 16/03/2017
Resumen: Programa que se calula la descomposicion en factores primos de un numero entero.
*/

#include<stdio.h>

intmain(){
    int numero, n = 2;
    printf("ingrese un numero \n");
    scanf("%d", &numero);

    while(n<=numero){
        if(numero%n==0){
        numero=numero/n;
        printf("%d * ",n);
        }
        else{
        n++;
        }
    }
 return 0;
}
