/*
Programa: Calcular un resultado
Autor: Alejandro Santibañez Sanchez
Fecha: 16/03/2017
Resumen: Programa que calcula el resultado de la expresion 1-2+3-4+5-6...n
*/

#include<stdio.h>

intmain(){
     int n,i,suma = 0;
     printf("Ingrese un termino \n");
     scanf("%d", &n);
     for(i = 1; i <= n; i++){
      if(i%2==0)
       suma = suma - i;
      else
       suma = suma + i;
     }
     printf("El total es: %d \n", suma);
return 0;

}
