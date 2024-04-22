#include <stdio.h>

int main() {
    int p;
    float costo;
 
    printf("Programa para calcular el costo total de los panes a comprar\n"); 
    printf("Ingrese la cantidad de panes: ");
    scanf("%d", &p); //el señor augusto vende sus panes a 8bs cada uno//
    
    costo = p*8;
    
    printf("costo total: %.2f bs\n", costo); 
 
    return 0;
}