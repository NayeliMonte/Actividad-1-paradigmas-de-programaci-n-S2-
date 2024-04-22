#include <stdio.h>

int main() {
    int h;
    int d;
 
    printf("Programa para calcular cuantos km/h recorre un pingüino nadando\n"); 
    printf("Ingrese las horas nadando: ");
    scanf("%d", &h); //el pingüino recorre 120km en 3 h, si dividimos 120/3= 40, siendo 40km/h//
    
    d = h * 40;
 
    printf("La distancia recorrida por el pingüino es de: %d km\n", d); 
 
    return 0;
}